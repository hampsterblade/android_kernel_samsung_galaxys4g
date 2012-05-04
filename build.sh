#!/bin/bash

set -x

ANDROID_DIR="${HOME}/android"
INITRAMFS="${ANDROID_DIR}/sgs4g_voodoo_initramfs"
INITRAMFS_TMP="/tmp/initramfs"
TEAMACIDDIR="${ANDROID_DIR}/teamacid/work"

export PATH="${TEAMACIDDIR}/prebuilt/linux-x86/toolchain/arm-eabi-4.4.3/bin:${PATH}"

export ARCH=arm
export SUBARCH=arm
export CROSS_COMPILE=arm-eabi-
JOBS=$(($(grep ^process /proc/cpuinfo | wc -l) + 1))

rm -rf ${INITRAMFS_TMP}
cp -rf ${INITRAMFS} ${INITRAMFS_TMP}
find "${INITRAMFS_TMP}" -name '\.git' -o -name '\.gitignore' -o -name 'EMPTY_DIRECTORY' | xargs rm -rf
make -j${JOBS} distclean
make -j${JOBS} vibrantplus_defconfig
make -j${JOBS} oldconfig
make -j${JOBS} zImage modules
rm -rf usr/{built-in.o,initramfs_data.{*o,cpio*}}
cp $(find ${BUILD_DIR} -name '*.ko') ${INITRAMFS}/lib/modules/
cp $(find ${BUILD_DIR} -name '*.ko') ${INITRAMFS_TMP}/lib/modules/
make -j${JOBS} zImage
