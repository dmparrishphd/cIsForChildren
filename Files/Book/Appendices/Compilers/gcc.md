Creating Programs with GCC
==========================

[GCC](https://gcc.gnu.org/)
is the _GNU Compiler Collection_.
You can use it to create programs.

GCC has many, many parts.
This book uses only a few of those parts.
Again, this book is mainly about the C keywords,
not about compilers or GCC.

As you gain skill in programming,
you may wish to learn more about the compiler and
its many parts.
You may wish to use more of those parts for your programs.

We use the command line to ask GCC to compile a program.
Here is an example:

    gcc   -std=c89   -o program.exe   program.c
    
This tells your computer to run the gcc program with the options
`-std=c89` and `-o program.exe` to compile a file named `progam.c`.

The `-std=c89` option tells GCC to use a specific *standard* of C called `c89`.

The `-o program.exe` option tells GCC to store the result in a file called `program.exe`.
