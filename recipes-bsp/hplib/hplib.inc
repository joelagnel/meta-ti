COMPATIBLE_MACHINE = "keystone"
PACKAGE_ARCH = "${MACHINE_ARCH}"

DEVICELIST_k2hk-evm = "k2h k2k"
DEVICELIST_k2l-evm  = "k2l"
DEVICELIST_k2e-evm  = "k2e"

HPLIB_GIT_URI = "git://git.ti.com/keystone-rtos/hplib.git"
HPLIB_GIT_PROTOCOL = "git"
HPLIB_GIT_BRANCH = "master"

# Below Commit ID corresponds to "DEV.HPLIB.01.01.00.06"
HPLIB_SRCREV = "1cbe6a41926c131d9cab63b40d43807c6e56e2fd"

BRANCH = "${HPLIB_GIT_BRANCH}"
SRC_URI = "${HPLIB_GIT_URI};protocol=${HPLIB_GIT_PROTOCOL};branch=${BRANCH}"
SRCREV = "${HPLIB_SRCREV}"

PV = "01.01.00.06+git${SRCPV}"
INC_PR = "r1"
