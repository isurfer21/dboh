# DBOH

This program converts decimal, binary, octal and hexadecimal numbers. It uses basic algorithms that can be applied by humans. It doesn’t use any library or built-in functionality.

## Build

You can build this program as an executable file (EXE) or a WebAssembly binary (WASI).

### EXE

To build this program as an EXE, you need to have the GCC compiler installed on your system. You can download it from [here](https://gcc.gnu.org/).

To compile the source code file `dboh.cpp` into an executable file `dboh.exe`, open a terminal or command prompt and run the following command:

```shell
gcc dboh.cpp -o dboh.exe
```

This will create a file named `dboh.exe` in the same directory as the source code file.

### WASI

To build this program as a WASI, you need to have the WASI SDK installed on your system. You can follow the instructions from [wasi-sdk-setup](https://github.com/isurfer21/wasi-sdk-setup) to set up the WASI SDK.

To compile the source code file `dboh.cpp` into a WebAssembly binary file `dboh.wasm`, open a terminal or command prompt and run the following command:

```shell
wasi clang dboh.cpp -o dboh.wasm
```

This will create a file named `dboh.wasm` in the same directory as the source code file.

## Execute

You can execute this program either as an EXE or a WASI.

### EXE

To execute this program as an EXE, you need to have a Windows operating system.

To run the executable file `dboh.exe`, open a terminal or command prompt and run the following command:

```shell
.\dboh.exe
```

This will launch the program and prompt you to enter a number and its base. You can then see the converted number in different bases.

### WASI

To execute this program as a WASI, you need to have wasmtime installed on your system. You can download it from [here](https://wasmtime.dev/).

To run the WebAssembly binary file `dboh.wasm`, open a terminal or command prompt and run the following command:

```shell
wasmtime dboh.wasm
```

This will launch the program and prompt you to enter a number and its base. You can then see the converted number in different bases.
