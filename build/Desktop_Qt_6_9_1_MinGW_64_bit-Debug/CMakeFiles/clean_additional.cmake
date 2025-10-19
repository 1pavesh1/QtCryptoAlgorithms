# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\QtCryptoAlgorithms_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\QtCryptoAlgorithms_autogen.dir\\ParseCache.txt"
  "QtCryptoAlgorithms_autogen"
  )
endif()
