# lib-ndk-workflow

A reusable GitHub Actions template for building Android native libraries with the Android NDK and CMake.

## What it builds

- Shared libraries (`.so`)
- Static libraries (`.a`)
- Android ABIs: `arm64-v8a`, `armeabi-v7a`, and `x86_64`
- Release builds by default

## Quick start

1. Put your CMake project in the repository root.
2. Keep your library target in `CMakeLists.txt`.
3. Push to `main`, or open **Actions → Build Android Libraries → Run workflow**.
4. Download the generated ABI-specific artifacts from the workflow run.

The included `src/native.cpp` and `CMakeLists.txt` are a small working example. Replace them with your own source files and targets.

## Build settings

Edit the values in `.github/workflows/build.yml` to change the NDK version, Android API level, build type, or ABI matrix.

| Setting | Default |
| --- | --- |
| NDK | 27.2.12479018 |
| Android API |  android-24 |
| Build type | Release |
| ABIs | arm64-v8a, armeabi-v7a, x86_64 |

## Output

Each matrix job uploads an artifact named `android-libraries-<abi>`. The artifact contains the shared and/or static libraries produced by your CMake targets.

## Requirements

- CMake-based C/C++ project
- A valid root `CMakeLists.txt`
- Library targets created with `add_library()`

## License

MIT
