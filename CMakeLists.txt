cmake_minimum_required(VERSION 3.19)
project(QtCryptoAlgorithms LANGUAGES CXX)

find_package(Qt6 6.5 REQUIRED COMPONENTS Core Widgets)

qt_standard_project_setup()

qt_add_executable(QtCryptoAlgorithms
    WIN32 MACOSX_BUNDLE
    main.cpp
    ClientInterface.cpp
    ClientInterface.h
    ClientInterface.ui
    CustomWidgets/MessageWidget.h
    AbstractClasses/AnimationInterface.h AbstractClasses/CustomWidget.h
    Enum/TypeMessage.h
    Enum/TypeAlgorithm.h

    CryptoAlgorithms/RSAEncryptor.h
    CryptoAlgorithms/AESEncryptor.h
    CryptoAlgorithms/XTEAEncryptor.h
    CryptoAlgorithms/BlowfishEncryptor.h
    CryptoAlgorithms/DESEncryptor.h
    Timer/TimerOfSpeed.h
    Enum/TypeCiphertext.h
)

include(GNUInstallDirs)

install(TARGETS QtCryptoAlgorithms
    BUNDLE  DESTINATION .
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
)

qt_generate_deploy_app_script(
    TARGET QtCryptoAlgorithms
    OUTPUT_SCRIPT deploy_script
    NO_UNSUPPORTED_PLATFORM_ERROR
)

install(SCRIPT ${deploy_script})

include(FetchContent)

FetchContent_Declare(
  Qt-Secret
  GIT_REPOSITORY https://github.com/QuasarApp/Qt-Secret
  GIT_TAG        1.3.2
)

set(BUILD_SHARED_LIBS ON)
target_link_libraries(QtCryptoAlgorithms
    PRIVATE
        Qt::Core
        Qt::Widgets
    PUBLIC
        Qt-Secret
)

FetchContent_MakeAvailable(Qt-Secret)
