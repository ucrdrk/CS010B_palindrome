#!/usr/bin/env bash

TESTS_DIR=tests
BUILD_DIR=${TESTS_DIR}/build
SRC_DIR=src

if [ -f "${SRC_DIR}/palindrome.cpp" ]; then
  if [ ! -f ${BUILD_DIR} ]; then
    mkdir -p ${BUILD_DIR}
    cmake -B ${BUILD_DIR} -G "Unix Makefiles" .
  fi
  cmake --build ${BUILD_DIR} --config Debug --target clean -- 
  cmake --build ${BUILD_DIR} --config Debug --target all -- 
  if [ -f "${BUILD_DIR}/palindrome_test" ]; then
    ${BUILD_DIR}/palindrome_test 
  fi
  echo "Checking code for style and potential bugs..."
  clang-tidy -p ${BUILD_DIR} --checks=readability-*,bugprone-*,modernize-*,portability-*,performance-* ${SRC_DIR}/palindrome.cpp 2> /dev/null
else
    echo "Cannot seem to find ${SRC_DIR}/palindrome.cpp. Please be sure to you code for this assignment, and put it in this file."
fi

echo "Checking for email address in header..."
python3 header_check.py