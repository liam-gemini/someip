#！/bin/bash

# Check whether architecture parameter provided
if [ $# -lt 1 ]; then
    echo "Usage: $0 <arch> <ut/st> <clean>"
    echo "Supported architectures: arm, x86"
    exit 1
fi

# Define variables for build and output directories
BUILD_DIR="build"
BINARY_DIR="bin"

# Function to clean the build directory
clean() {
    echo "Cleaning build directory..."
    if [ -d "$BUILD_DIR" ]; then
        rm -rf "$BUILD_DIR"
        echo "Build directory cleaned."
    else
        echo "No build directory to clean."
    fi
    echo "Cleaning build directory..."
    if [ -d "$BINARY_DIR" ]; then
        rm -rf "$BINARY_DIR"
        echo "Binary directory cleaned."
    else
        echo "No binary directory to clean."
    fi
}

ARCH=$1
TEST=$2
ENABLE_UT="OFF"
ENABLE_ST="OFF"

# Parse command-line arguments
case "$ARCH" in
    x86)
        CMAKE_CXX_COMPILER="g++"
        CMAKE_C_COMPILER="gcc"
        ;;
    arm)
        CMAKE_CXX_COMPILER="arm-linux-gnueabi-g++"
        CMAKE_C_COMPILER="arm-linux-gnueabi-gcc"
        ;;
    *)
        echo "Unsupported architecture: $1"
        echo "Supported architectures: arm, x86"
        exit 1
        ;;
esac

case "TEST" in
    ut)
        ENABLE_UT="ON"
        ;;
    st)
        ENABLE_ST="ON"
        ;;
esac

for arg in "$@"; do
    case $arg in
        clean)
            clean
            ;;
    esac
done

mkdir -p $BUILD_DIR
cd $BUILD_DIR
cmake .. \
    -DCMAKE_CXX_COMPILER=$CMAKE_CXX_COMPILER \
    -DCMAKE_C_COMPILER=$CMAKE_C_COMPILER \
    -DENABLE_UT=$ENABLE_UT \
    -DENABLE_ST=$ENABLE_ST

echo "Compiling project..."
make -j$(nproc)

echo "Build succeed for $ARCH"