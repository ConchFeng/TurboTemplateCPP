@echo off

pip install conan
conan version
conan profile detect --force
if errorlevel 1 (
    echo Failed to install conan
    exit /b 1
)

conan install . --output-folder=build --build=missing
if errorlevel 1 (
    echo Conan install failed
    exit /b 1
)

cd build
if errorlevel 1 (
    echo Build directory not found
    exit /b 1
)

cmake .. -G "Visual Studio 17 2022" -DCMAKE_TOOLCHAIN_FILE=conan_toolchain.cmake -DCMAKE_POLICY_DEFAULT_CMP0091=NEW
if errorlevel 1 (
    echo CMake generation failed
    exit /b 1
)

pause
