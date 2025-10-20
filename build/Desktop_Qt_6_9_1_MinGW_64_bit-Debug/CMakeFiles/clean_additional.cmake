# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\QtCryptoAlgorithms_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\QtCryptoAlgorithms_autogen.dir\\ParseCache.txt"
  "QtCryptoAlgorithms_autogen"
  "_deps\\qt-secret-build\\Qt-Secret-GUI\\CMakeFiles\\Qt-Secret-GUI_autogen.dir\\AutogenUsed.txt"
  "_deps\\qt-secret-build\\Qt-Secret-GUI\\CMakeFiles\\Qt-Secret-GUI_autogen.dir\\ParseCache.txt"
  "_deps\\qt-secret-build\\Qt-Secret-GUI\\Qt-Secret-GUI_autogen"
  "_deps\\qt-secret-build\\src\\CMakeFiles\\Qt-Secret_autogen.dir\\AutogenUsed.txt"
  "_deps\\qt-secret-build\\src\\CMakeFiles\\Qt-Secret_autogen.dir\\ParseCache.txt"
  "_deps\\qt-secret-build\\src\\Qt-Secret_autogen"
  "_deps\\qt-secret-build\\src\\mini-gmp\\src\\CMakeFiles\\QtBigint_autogen.dir\\AutogenUsed.txt"
  "_deps\\qt-secret-build\\src\\mini-gmp\\src\\CMakeFiles\\QtBigint_autogen.dir\\ParseCache.txt"
  "_deps\\qt-secret-build\\src\\mini-gmp\\src\\QtBigint_autogen"
  "_deps\\qt-secret-build\\src\\mini-gmp\\tests\\CMakeFiles\\QtBigintTest_autogen.dir\\AutogenUsed.txt"
  "_deps\\qt-secret-build\\src\\mini-gmp\\tests\\CMakeFiles\\QtBigintTest_autogen.dir\\ParseCache.txt"
  "_deps\\qt-secret-build\\src\\mini-gmp\\tests\\QtBigintTest_autogen"
  "_deps\\qt-secret-build\\tests\\CMakeFiles\\Qt-SecretTest_AES_autogen.dir\\AutogenUsed.txt"
  "_deps\\qt-secret-build\\tests\\CMakeFiles\\Qt-SecretTest_AES_autogen.dir\\ParseCache.txt"
  "_deps\\qt-secret-build\\tests\\CMakeFiles\\Qt-SecretTest_RSA_autogen.dir\\AutogenUsed.txt"
  "_deps\\qt-secret-build\\tests\\CMakeFiles\\Qt-SecretTest_RSA_autogen.dir\\ParseCache.txt"
  "_deps\\qt-secret-build\\tests\\Qt-SecretTest_AES_autogen"
  "_deps\\qt-secret-build\\tests\\Qt-SecretTest_RSA_autogen"
  )
endif()
