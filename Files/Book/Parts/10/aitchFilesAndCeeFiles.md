.h Files and .c Files
---------------------

Our code will be organized into
`.h` "aitch" files and
`.c` "cee" files.

Each component of our program will be coded into exactly one
_pair_ of files:
exactly one `.h` file and
exactly one `.c` file.

### .h Files

The `.h` files have the form

    #ifndef H_.............................
    #define H_.............................
    // additional lines
    #endif

To be more specific,
the first line of an `.h` file has the form

    #ifndef H_.............................

The second line of an `.h` file has the form

    #define H_.............................

And the last line of an `.h` file is exactly

    #endif

I am using `.............................` here to mean
one to 29 characters that match the name of the `.h` file
in which the identifier is found.
You can use a script like 

    $ for X in h/* ; do : ; ls "$X" ; head -2 "$X" | tail -1 ; done

to get an idea for what I mean by "match."
That script will print the name of each `.h` file along with
the second line of each `.h` file.

Among all the files in our program, each identifier
`#define`-d "pound defined" on the second line of each `.h` file
should be found only on the first two lines of each `.h` file.
Beginning these identifiers with `H_` helps to ensure this.

We can check that our program has `H_` identifiers only on the
first and second lines of the `.h` files by using `grep`:

    $ grep -n '\<H_' c/* h/*

Each `.h` file should contain only code that may be `#include`-d
in _any_ of the `.c` files of our program.
Each `.h` file represents an _interface_ to a component.

### .c Files

The first line of each `.c` file should have the form

    #include "______________________________.h"

I am using `______________________________` here to mean
one to 29 characters that match the name of the `.c` file
in which the `______________________________` is found.
You can use a script like 

    $ for X in c/* ; do : ; ls "$X" ; head -1 "$X" ; done

to get an idea for what I mean by "match."
That script will print the name of each `.c` file along with
the first line of each `.c` file.

Each `.c` file should contain only code that will be invisible
to any other component of our program.
Each `.c` file represents an _implementation_ of the interface
given in the `.h` file it is paired with.
