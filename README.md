## Table of Contents
- [Table of Contents](#table-of-contents)
- [Diretory](#diretory)
- [Build](#build)
  - [Build for x86](#build-for-x86)
  - [Build for arm](#build-for-arm)
  - [Clean and build](#clean-and-build)
- [Run](#run)

## Diretory
+ src: source file
+ bin: output binary
+ build: temperory build directory

## Build
### Build for x86
```bash
./build.sh x86
```
### Build for arm
```bash
./build.sh arm
```
### Clean and build
```bash
./build.sh x86 clean
```
## Run
```bash
env VSOMEIP_CONFIGURATION=/path/to/vsomeip.json VSOMEIP_APPLICATION_NAME=SampleApp ./sample-app
```