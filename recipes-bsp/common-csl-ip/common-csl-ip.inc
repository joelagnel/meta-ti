DESCRIPTION = "Chip support library low level interface"
LICENSE = "BSD-3-Clause"
LIC_FILES_CHKSUM = "file://COPYING.txt;md5=5857833e20836213677fac33f9aded21"

COMPATIBLE_MACHINE = "keystone|dra7xx"
PACKAGE_ARCH = "${MACHINE_ARCH}"

INC_PR = "r4"

CSL_GIT_URI = "git://git.ti.com/keystone-rtos/common-csl-ip.git"
CSL_GIT_PROTOCOL ="git"
CSL_GIT_BRANCH = "master"
CSL_GIT_BRANCH_dra7xx = "releases/PROCESSOR-SDK.01.00.00"
CSL_GIT_DESTSUFFIX = "git"

# commit ID corresponds to DEV.CSL_KEYSTONE2.02.01.01.00A
CSL_SRCREV = "17bb083f0d5ed4ad6f38c991210a6a8e9aaf9c56"

# commit ID corresponds to PROCESSOR-SDK-ALPHA-1
CSL_SRCREV_dra7xx = "37c5311ddf289f83b1432a9422816722d264bf55"

BRANCH="${CSL_GIT_BRANCH}"
SRC_URI = "${CSL_GIT_URI};protocol=${CSL_GIT_PROTOCOL};branch=${BRANCH};destsuffix=${CSL_GIT_DESTSUFFIX}"
SRCREV = "${CSL_SRCREV}"

S = "${WORKDIR}/${CSL_GIT_DESTSUFFIX}"
