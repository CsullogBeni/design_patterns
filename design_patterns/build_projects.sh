#!/bin/bash

find . -type d -name "src" | while read d; do
  echo "Building in $d"
  pushd "$d"
  mkdir -p build
  pushd build
  cmake ..
  make
  popd
  popd
done