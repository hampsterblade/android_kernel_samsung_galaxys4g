#!/bin/bash

set -e

if [ ! x"${DEBUG_BUILD}" = x"" ]
then
    set -x
fi

# Command line arguments
command="${1}"
opt_arg="${2}"
startdir="$(pwd)"

# Default Make Arguments
ARCH=${ARCH:-"arm"}
DEFCONFIG=${DEFCONFIG:-"aries_galaxys4g_defconfig"}
SRC=${SRC:-"${ANDROID_BUILD_TOP}/kernel/galaxys4gmtd"}
BLD=${BLD:-"${ANDROID_PRODUCT_OUT}/kernel/galaxys4gmtd"}
JOBS=${JOBS:-"$(grep ^process /proc/cpuinfo | wc -l)"}
CROSSCC=${CROSSCC:-"${ANDROID_TOOLCHAIN}/arm-eabi-"}
HOSTCC=${HOSTCC:-"$(which gcc)"}
HOSTCXX=${HOSTCXX:-"$(which g++)"}
EXTRA_CONFIG=${EXTRA_CONFIG:-""}
DEFAULT_ARGS=${DEFAULT_ARGS:-"-C ${SRC} O=${BLD} -j${JOBS} ARCH=${ARCH} \
    CROSS_COMPILE=${CROSSCC} HOSTCC=${HOSTCC} HOSTCXX=${HOSTCXX} \
    ${EXTRA_CONFIG}"}

# MISC Options

# Utility Functions
error_msg()
{
    abort_msg "============== Error!!! ==============\n${@}"
    exit 1
}

abort_msg()
{
    printf "${@}\n"
    exit 1
}

abort()
{
    exit 1
}

prep()
{
    printf "============== Prep ====================\n"
    cd ${SRC}
    make distclean || error "Could not make distclean in ${SRC}!"

    if [ ! -d ${BLD} -a ! x"${command}" = x"distclean" ]
    then
        mkdir -p ${BLD} || error "Could not make the ${BLD} directory!"
        make ${DEFAULT_ARGS} ${DEFCONFIG} || \
            error "Could not set default config!"
    fi
}

build()
{
    prep
    printf "============== Build ===================\n"
    cd ${SRC}
    make ${DEFAULT_ARGS} || error "Build Failed!"
    if [ -f ${BLD}/arch/${ARCH}/boot/zImage ]
    then
        cp ${BLD}/arch/${ARCH}/boot/zImage 
    fi
    finalize
}

config()
{
    prep
    printf "============== Config ==================\n"
    cd ${SRC}
    make ${DEFAULT_ARGS} menuconfig || error "Menuconfig failed!"
    if [ -r ${BLD}/.config ]
    then
        cp ${BLD}/.config ${SRC}/arch/${ARCH}/configs/${DEFCONFIG} || \
            error "Could not copy ${BLD}/.config to ${SRC}/arch/${ARCH}/configs" \
            "/${DEFCONFIG}"
    fi
    finalize
}

distclean()
{
    prep
    printf "============== DistClean ===============\n"
    rm -rf ${BLD} || error "Unable to delete directory: ${BLD}"
    printf "Successfully removed: ${BLD}\n"
    finalize
}

repack()
{
    prep
    printf "============== Repack ==================\n"
    printf "Nothing for now... implement me $(id -un)\n"
    finalize
}

usage()
{
    printf "============== Usage ===================\n"
    printf "Commands:\n"
    printf "\tbuild\t\tbuild the kernel\n"
    printf "\tconfig\t\trun menuconfig and copy it over the defconfig\n"
    printf "\trepack\t\trepack the initramfs if the kernel exists\n"
    printf "\tdistclean\tclean up the kernel.\n"
    printf "\tusage\t\tThis help\n"
    printf "You can override the following environment variables\n"
    printf "by using export.\n"
    printf "ARCH\t\tSets the architecture to build for. (Default: arm)\n"
    printf "DEFCONFIG\tSets the defconfig to use.\n"
    printf "\t\t(Default: aries_galaxys4g_defconfig)\n"
    printf "SRC\t\tSets the kernel source directory.\n"
    printf "\t\t(Default: ${ANDROID_BUILD_TOP}/kernel/galaxys4gmtd)\n"
    printf "BLD\t\tSets the build output directory.\n"
    printf "\t\t(Default: ${ANDROID_PRODUCT_OUT}/kernel/galaxys4gmtd)\n"
    printf "JOBS\t\tSets the number of jobs to build with.\n"
    printf "\t\t(Default: $(grep ^process /proc/cpuinfo | wc -l))\n"
    printf "CROSSCC\t\tCross-Compiler to use.\n"
    printf "\t\t(Default: ${ANDROID_TOOLCHAIN}/arm-eabi-)\n"
    printf "HOSTCC\t\tHost cc to use.\n"
    printf "\t\t(Default: $(which gcc))\n"
    printf "HOSTCXX\t\tHost cxx to use.\n"
    printf "\t\t(Default: $(which g++))\n"
    printf "EXTRA_CONFIG\tCan be used to add other arguments\n"
    printf "to the kernel make command line. This is not set by default.\n"
    printf "DEFAULT_ARGS\tDefault arguments provided by the above:\n"
    printf "\t\t-C ${SRC} O=${BLD} -j${JOBS} ARCH=${ARCH} \
    CROSS_COMPILE=${CROSSCC} HOSTCC=${HOSTCC} HOSTCXX=${HOSTCXX} \
    ${EXTRA_CONFIG}\n\n"
    abort
}

missing_arg()
{
    printf "============== Missing Argument ========\n"
    printf "Nothing for now... implement me $(id -un)\n"
}

finalize()
{
    printf "============== Finalize ================\n"
    if [ ! x"$(git status -z)" = x"" ]
    then
        :
    #    printf "============== Dirty Build =============\n"
    #    printf "The build has outstanding changes.\nFollowing are the outstanding changes.\n"
    #    git status
    #    git diff
    fi
}

main()
{
    printf "============== Main ====================\n"

    case $command in
        build)
            build
            ;;
        config)
            config
            ;;
        distclean)
            distclean
            ;;
        repack)
            repack
            ;;
        *)
            usage
            ;;
    esac
}

# Deal with silly users
if [ x"${ANDROID_BUILD_TOP}" = x"" ]
then
    error "You have not ran:\n\nsource ./build/envsetup.sh\nlunch cyanogen_galaxys4gmtd-eng"
fi
if [ x"${command}" = x"" ]
then
    printf "============== Error!!! ==============\nYou must supply a command!\n"
    usage
fi

# DO IT!!!
main

# vi: ts=4:sw=4:et:ai
