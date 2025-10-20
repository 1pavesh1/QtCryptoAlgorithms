# Distributed under the OSI-approved BSD 3-Clause License.  See accompanying
# file Copyright.txt or https://cmake.org/licensing for details.

cmake_minimum_required(VERSION 3.5)

# If CMAKE_DISABLE_SOURCE_CHANGES is set to true and the source directory is an
# existing directory in our source tree, calling file(MAKE_DIRECTORY) on it
# would cause a fatal error, even though it would be a no-op.
if(NOT EXISTS "D:/Qt projects/QtCryptoAlgorithms/build/Desktop_Qt_6_9_1_MinGW_64_bit-Debug/_deps/qtsecret-src")
  file(MAKE_DIRECTORY "D:/Qt projects/QtCryptoAlgorithms/build/Desktop_Qt_6_9_1_MinGW_64_bit-Debug/_deps/qtsecret-src")
endif()
file(MAKE_DIRECTORY
  "D:/Qt projects/QtCryptoAlgorithms/build/Desktop_Qt_6_9_1_MinGW_64_bit-Debug/_deps/qtsecret-build"
  "D:/Qt projects/QtCryptoAlgorithms/build/Desktop_Qt_6_9_1_MinGW_64_bit-Debug/_deps/qtsecret-subbuild/qtsecret-populate-prefix"
  "D:/Qt projects/QtCryptoAlgorithms/build/Desktop_Qt_6_9_1_MinGW_64_bit-Debug/_deps/qtsecret-subbuild/qtsecret-populate-prefix/tmp"
  "D:/Qt projects/QtCryptoAlgorithms/build/Desktop_Qt_6_9_1_MinGW_64_bit-Debug/_deps/qtsecret-subbuild/qtsecret-populate-prefix/src/qtsecret-populate-stamp"
  "D:/Qt projects/QtCryptoAlgorithms/build/Desktop_Qt_6_9_1_MinGW_64_bit-Debug/_deps/qtsecret-subbuild/qtsecret-populate-prefix/src"
  "D:/Qt projects/QtCryptoAlgorithms/build/Desktop_Qt_6_9_1_MinGW_64_bit-Debug/_deps/qtsecret-subbuild/qtsecret-populate-prefix/src/qtsecret-populate-stamp"
)

set(configSubDirs )
foreach(subDir IN LISTS configSubDirs)
    file(MAKE_DIRECTORY "D:/Qt projects/QtCryptoAlgorithms/build/Desktop_Qt_6_9_1_MinGW_64_bit-Debug/_deps/qtsecret-subbuild/qtsecret-populate-prefix/src/qtsecret-populate-stamp/${subDir}")
endforeach()
if(cfgdir)
  file(MAKE_DIRECTORY "D:/Qt projects/QtCryptoAlgorithms/build/Desktop_Qt_6_9_1_MinGW_64_bit-Debug/_deps/qtsecret-subbuild/qtsecret-populate-prefix/src/qtsecret-populate-stamp${cfgdir}") # cfgdir has leading slash
endif()
