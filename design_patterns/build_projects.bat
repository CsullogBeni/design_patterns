@echo off

for /f "delims=" %%d in ('dir /s /b /ad "src"') do (
  echo Building in %%d
  pushd "%%d"
  mkdir build
  pushd build
  cmake ..
  make
  popd
  popd
)