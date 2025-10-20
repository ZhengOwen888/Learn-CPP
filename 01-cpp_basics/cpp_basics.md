# 1. C++ Basics Notes

## 1.1 Statements and Structure

### Statements

A type of instruction that causes the program to perform some action:

- Declaration
- Jump
- Expression
- Compund
- Selection (conditionals)
- Iteration (loops)
- Try Block

### Functions

A collection of statements that executes sequentially

### main()

every program must have a "main()" function, statements inside main\ are executed in sequential order

### Errors

- Compile time error
- Linker error
- Runtime error
- Logical error

### C++ Standard Library

Collection of precompiled code that has been "packaged up" for reuse

## 1.2 Comments

### Comments

Readable notes in source code for the programmer, ignored by compiler\

- Single line comment (// )
- Multi line comment (/\* \*/)

> [!Tip]
>
> - Comment code as if someone who has no idea what the code does
> - Comment should explain the reason why some statements are written that way
> - Use #if 0 preprocessor directive to comment out code block

## 1.3 Objects and Variables

### Data

Information that can be moved, processed, or stored by a computer

- value - single peice of data (data value)
- literals - values placed directly into source code (hard coded)

### Random Access Memory (RAM)

The main memory in a computer (RAM), the operating system load executing\ program into RAM, and use extra storage for calculated values, input values,\ read data, and written data.

### Objects and Variables

- Objects - represent a region of storage (RAM or CPU register)
- Variables - named memory location which store a value
- Identifier - name used to identify programming elements (variables, functions, classes, etc.)

## 1.4 Variable Assignment and Initialization

### Initialization and Assignment

- Initialization - gives a variable initial value right when it is created
- Assignment - gives a variable a value after it was created

## 1.5 iostream: cout, cin, and endl

## std::cout

A predefined object that is used for standard output. It uses the (<<) operator\
to insert data into the buffer before flushing.

## std::in

A predefined object that is used for standard input. It uses the (>>) operator\
to extract data from buffer after user input is stored in the buffer. User input\
is seperated by a newline character \n. User input is read until an invalid data\
is read or a newline value is read. Having an unexpected or invalid user input\
can potentially cause the extraction of data to abort and proceed to the next\
extraction. This is problematic and the unextracted data stays in the buffer until\
issue is resolved or when the program terminates.

## std::endl and \n

std::endl is a iostream manipulator meaning it manipulates or changes the way\
the iostream displays data. For one it adds a new line to the buffer and force\
flush everything in the buffer to the destination which is the console. This\
is a very slow process if you use std::end after every new line.\

Instead you should use \n, which is a representation of unicode character for
newline. Let the program automatically flush instead.

## 1.6 Uninitialized Variables

- Initialized - giving the variable a initial value the moment it is defined
- Assignment - giving the variable a value some time after it has been defined
- Uninitialized - the variable is defined but with no value

- Implementation - the compiler and its standard library
- Implementation defined behavior - behavior created by implementation and is documented
- Unspecified bahavior - same as implementation defined behavior, but only that it is not documented

- Undefined Behavior (UB) - Behavior that is not defined by the Implementation, you can't predict or expect what would happen.
