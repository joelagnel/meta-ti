LICENSE = "BSD-3-Clause"
LIC_FILES_CHKSUM = "file://${WORKDIR}/git/ti/drv/cppi/COPYING.txt;md5=e8f6789acdcda76d02ed9203fc2e603d"

COMPATIBLE_MACHINE = "keystone"
PACKAGE_ARCH = "${MACHINE_ARCH}"

CPPI_LLD_GIT_URI = "git://git.ti.com/keystone-rtos/cppi-lld.git"
CPPI_LLD_GIT_PROTOCOL = "git"
CPPI_LLD_GIT_BRANCH = "master"
CPPI_LLD_GIT_DESTSUFFIX = "git/ti/drv/cppi"

# Below Commit ID corresponds to "DEV.CPPI_LLD.02.01.00.10"
CPPI_LLD_SRCREV = "97c537fa544a78e83512db3499a49d0bd86fad32"

BRANCH = "${CPPI_LLD_GIT_BRANCH}"
SRC_URI = "${CPPI_LLD_GIT_URI};destsuffix=${CPPI_LLD_GIT_DESTSUFFIX};protocol=${CPPI_LLD_GIT_PROTOCOL};branch=${BRANCH}"

SRCREV = "${CPPI_LLD_SRCREV}"
PV = "02.01.00.10"
INC_PR = "r2"

DEVICELIST_k2hk-evm = "k2h k2k"
DEVICELIST_k2l-evm  = "k2l"
DEVICELIST_k2e-evm  = "k2e"

S = "${WORKDIR}/${CPPI_LLD_GIT_DESTSUFFIX}"
