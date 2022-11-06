The Character Set
=================

In this book, I will write about _"the character set"_.

The **character set** has all of the characters of the **basic source character set**.
It will be easier to tell you about the character set
if I tell you about the basic source character set first.

**Source** is a sequence of characters---and another thing--that may be used to write in C.
The other thing that source may have are **end-of-line** markers.
I will tell you about end-of-line markers in a little while.

The Basic Source Character Set
------------------------------

### Graphic Characters

The **graphic characters** of the basic source character set are

    ~    !         #         %    ^    &    *    (    )    _    +
         1    2    3    4    5    6    7    8    9    0    -    =

           Q    W    E    R    T    Y    U    I    O    P    {    }    |
           q    w    e    r    t    y    u    i    o    p    [    ]    \

            A    S    D    F    G    H    J    K    L    ;    "
            a    s    d    f    g    h    j    k    l    :    '

              Z    X    C    V    B    N    M    <    >    ?
              z    x    c    v    b    n    m    ,    .    /

A graphic character is a character that makes a mark.

### Invisible Characters

There are a few other characters in the basic source character set, but they are invisible.

One of these invisible characters is the **space** character.
There are three other invisible characters that are in the basic source character set,
but we do not have to use them.
And we won't use them in this book.

### And Another Thing (End-of-Line)

There is another thing that could be a character, but does not have to be.
This one more thing is called the **end-of-line indicator**,
"Indy Kate or."

An end-of-line indicator is a special symbol (usually invisible) that helps you to see source, but does not mean anything in C---except that the end-of-line indicator separates symbols from each other.

Replacing an end-of-line indicator with a space does not change the meaning of C code.

However, when we write real C programs, we usually include some parts that are not actually C.
In these parts, the end-of-line marker has a different meaning.
These parts include **comments** and **macros**.

The Character Set
-----------------

All of the graphic characters in the basic source character set are in the character set.

The space character is in the character set.

The **new-line** character is in the character set.
The new-line character is the only _invisible_ character in the character set that is not a space.
The new-line character is used as the end-of-line indicator in our source code.
