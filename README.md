# rev

A C++17 project for experimenting with Git-like repository tooling.

## Prerequisites

- CMake 3.16 or newer
- A C++17 compiler (Clang or GCC)

On macOS with Xcode Command Line Tools:

```bash
xcode-select --install
```

## Build

From the project root:

```bash
make
```

This configures CMake in `build/` and compiles the `rev` binary to `build/rev`.

## Run

After building:

```bash
./build/rev init
```

Or build and run in one step:

```bash
make run ARGS="init"
```

You can also pass arguments directly:

```bash
make build
./build/rev init
```

## Clean

Remove build artifacts:

```bash
make clean
```

## Manual CMake

If you prefer CMake directly:

```bash
cmake -S . -B build -DCMAKE_BUILD_TYPE=Release
cmake --build build
./build/rev init
```

## IDE support

CMake exports `build/compile_commands.json` for language servers and IntelliSense.
Point your editor at that file if it does not pick it up automatically.
