# C++ Intro

## Steps to solve a problem

### Step1: Define the problem that you would like to solve

I want to write a program that ...

### Step2: Determine how you are going to solve the problem

Good Solutions<br/>

- Straightforward
- Well documented
- Built modularly (Reusable)
- Graceful Recovery (Error Handling)

### Step3: Write the program

1. Select a Programming Language (C++)
2. Select a Code Editor (VSCode)

```cpp
// main.cpp

#include <iostream>

int main() {
  std::cout << "Here is some text.";
  return 0;
}
```

> [!TIP]
> Name the first/primary source code file in each program main.cpp

### Step4: Compiling your source code

Compile C++ code with a C++ compiler. C++ compiler goes through\
each C++ Source code file and does two things:

1. Check C++ code follows rules of C++ Language
2. Translate C++ code to machine language intructions (object file)\
   ending with .o or .obj

### Step5: Linking object files, libraries, and creating output file

After the compiler finishes, the Linker comes to combine all of the\
object files and produce the desired output files (linking). It does\
three things:

1. Read in each object file and make sure they are valid
2. Confirm that dependencies between files are correctly resolved
3. Link to Library files, collection of precompiled code
4. Output a output file (exe file or some other file)

### Step6 & 7: Testing and Debugging

Run the program and test to see if it is running as it is expected.
If not start debugging, find the error and fix it.

## Options

### Build

Compiles all modified code files and link the object files to an executable,
does nothing if no changes were made to the files

### Clean

Removes all cache objects and executables

### Rebuild

Does a clean and then build

### Compile

Recompiles a single code file

### Run/Start

executes the executable from prior build
