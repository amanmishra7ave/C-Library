# C-Library
# Linked List Library (Array-based)

This is an array-based implementation of a singly linked list in C.

## Files

- `linkedlist.h`: Header file containing the function declarations.
- `liblinkedlist.a`: Static library.
- `liblinkedlist.so`: Dynamic library (Linux).

## Usage

1. Include the `linkedlist.h` header in your C program:
   ```c
   #include "linkedlist.h"
2. Compile and link with the static or dynamic library:

For static linking:
`gcc main.c -L. -llinkedlist -o main`

For dynamic linking:
`gcc main.c -L. -llinkedlist -o main`

3. Ensure that the dynamic library is available at runtime by setting LD_LIBRARY_PATH:

`export LD_LIBRARY_PATH=$LD_LIBRARY_PATH:/path/to/your/library`


