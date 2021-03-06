DESCRIPTION ?= "Qt is a cross-platform application development framework for desktop, embedded and mobile."
HOMEPAGE ?= "https://www.qt.io"

QT_MODULE ?= "${BPN}"
QT_MODULE_BRANCH ?= "dev"
QT_MODULE_BRANCH_PARAM ?= "branch=${QT_MODULE_BRANCH}"

SRC_URI = "${QT_GIT}/${QT_GIT_PROJECT}/${QT_MODULE}.git;name=${QT_MODULE};${QT_MODULE_BRANCH_PARAM};protocol=${QT_GIT_PROTOCOL}"

CVE_PRODUCT = "qt"

S = "${WORKDIR}/git"

PV = "6.3.0"

SRCREV = "${SRCREV_${QT_MODULE}}"

SRCREV_tqtc-qmlcompilerplus = "552d16b9f6505b2503a6789c17d2230679c12d0d"
SRCREV_qt3d = "ff51bedfb995498a04e21cfc978c6bca305754cb"
SRCREV_qt3d-assimp = "5a38cd0a03015ceabbd5bc6efb0730dde1ef74e5"
SRCREV_qt5compat = "9f5c7eada39e8476fec9615cb4ec90f05c852709"
SRCREV_qtbase = "64449abe17e34e02dcaa9791203e3a5065c9d1a7"
SRCREV_qtapplicationmanager = "6efaf00a1a367314d8a5e2a884dafbfca39cba50"
SRCREV_qtcharts = "4211d0f44d8cfb2e77b2e24ae460e5e5b477c9c1"
SRCREV_qtcoap = "791bf9ddfc167dd0d1b2651670dcb498f62cd7f6"
SRCREV_qtconnectivity = "5bbf815e9d39ecfa37e4a64e96fbfc263e780bc1"
SRCREV_qtdatavis3d = "f29343eee9e3e9f520d77ec09e03cf71eb425f42"
SRCREV_qtdeclarative = "a9f9a97f79e00fc0f82566a130f9f6692f73c5d7"
SRCREV_qtdeviceutilities = "5b7ad3cee9c3b46520c2eef86926538c939cfdff"
SRCREV_qtimageformats = "d180a583e8c751fd5e1f037d445ddfe588839914"
SRCREV_qtinterfaceframework = "32d3227f9ecdbc45f41cc02808d42e29af4bb4c9"
SRCREV_qtlottie = "dce7c2c675e64eee8d83080c1c85a78f5dc0925a"
SRCREV_qtmqtt = "0ea3eaa39c7773d90f6c1e6ee8a696b4b0490102"
SRCREV_qtmultimedia = "6c86be84be3359e312c5626a36d3d641a803c13c"
SRCREV_qtnetworkauth = "7ca59397b9aafa263193a237a5c6bbcab12d2e63"
SRCREV_qtopcua = "e0a17ba1762774f8a140c1bda6a455ab09f8fc7b"
SRCREV_qtpositioning = "b2fd1c6607afbcf2630d0fc5a52446828299e3a0"
SRCREV_qtquick3d = "81714b4cbfb7d79632a4ff98f574f26902368fa7"
SRCREV_qtquick3d-assimp = "0ba4945f9ebc68e51f74d65018610bd9e35f8a80"
SRCREV_qtquickdesigner-components = "e2a65b30c08b2614af09645d3e423b9e2255d644"
SRCREV_qtquicktimeline = "a3255598d82807c0b38cb6eb1593ff49823e71e0"
SRCREV_qtremoteobjects = "bafa4be97e5b6ec2ec9c601f15b576218f95b9e3"
SRCREV_qtscxml = "f8877f929d54a6821fa0cde457ebc8efdc6b8a81"
SRCREV_qtsensors = "64101d8aa5be33ffa052afabc49f0e2672b088f6"
SRCREV_qtserialbus = "3ac714f27008d6a4fd093f71a5d0b2fcb98bbd4c"
SRCREV_qtserialport = "238709d55c2b13d1c106cf07c901f0575f7da03a"
SRCREV_qtshadertools = "39be1a697aaa6794f4a5d0fc254e7dc502b777ff"
SRCREV_qtsvg = "c927a82fe5425a56747f482e9696ac5682485ef2"
SRCREV_qttools = "0dcc470164ab5de13023f03bc9c1e84a412ff454"
SRCREV_qttools-qlitehtml = "4931b7aa30f256c20573d283561aa432fecf8f38"
SRCREV_qttools-qlitehtml-litehtml = "6236113734bb0a28467e5999e86fdd2834be8e01"
SRCREV_qttranslations = "31b28eae3861e25fdcdee0589fcf4ac1d7ab6e11"
SRCREV_qtvirtualkeyboard = "ed58cca73795c4a5baaa89f37462a299ebbfebf4"
SRCREV_qtwayland = "34a8147f22ecba79f35616386da47e446bd1eed7"
SRCREV_qtwebchannel = "f2f4e5235d07250531878592e8207982ec7910c1"
SRCREV_qtwebengine = "56005ae3d52568b469db32498afebd9c52e4881b"
SRCREV_qtwebengine-chromium = "2335554cb5b76f9e72a01d700c78e930e653c968"
SRCREV_qtwebsockets = "cb7abc7ac0f19e0076a3927b0dd880606c6f92f6"
SRCREV_qtwebview = "be1c35d8198cfd0d9b9e0cfac2fe3f2dc963a5a4"
