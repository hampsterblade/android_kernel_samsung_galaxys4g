#!/bin/bash

set -x

ANDROID_DIR="${HOME}/android"
INITRAMFS="${ANDROID_DIR}/android_initramfs_samsung_galaxys4g"
INITRAMFS_TMP="/tmp/initramfs"
TEAMACIDDIR="${ANDROID_DIR}/teamacid/work"

export PATH="${TEAMACIDDIR}/prebuilt/linux-x86/toolchain/arm-eabi-4.4.3/bin:${PATH}"

export ARCH=arm
export SUBARCH=arm
export CROSS_COMPILE=arm-eabi-
JOBS=$(($(grep ^process /proc/cpuinfo | wc -l) + 1))

[ -d "${INITRAMFS}/.git" ] || git clone https://github.com/bhundven/android_initramfs_samsung_galaxys4g "${INITRAMFS}"

rm -rf ${INITRAMFS_TMP}
cp -rf ${INITRAMFS} ${INITRAMFS_TMP}
find "${INITRAMFS_TMP}" -name '\.git' -o -name '\.gitignore' -o -name 'EMPTY_DIRECTORY' | xargs rm -rf
make -j${JOBS} distclean
make -j${JOBS} vibrantplus_defconfig
make -j${JOBS} oldconfig
make -j${JOBS} zImage modules
rm -rf usr/{built-in.o,initramfs_data.{*o,cpio*}}
cp $(find . -name '*.ko') "${INITRAMFS}/lib/modules/" "${INITRAMFS_TMP}/lib/modules/"
make -j${JOBS} zImage && rm -rf ${INITRAMFS_TMP}

# success?
if [ ! -d "${INITRAMFS_TMP}" ]; then
    echo "Build successful"
    exit 0
else
    echo "Build Failed"
    exit 1
fi
