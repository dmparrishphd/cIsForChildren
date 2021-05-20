# Chapter 0: Show Me

> Sing me no song!
>
> Read me no rhyme!
>
> Don’t waste my time!
>
> Show me!
>
> ---Jay and Shaw, "Show Me," _My Fair Lady_

It's time to make your computer do something.
You will use `puts`, which is a function, not a keyword.

If you want your computer print something on the screen, make a program like "Hello Nurse:"

    /*  Program Hello Nurse
     */
    
    #include <stdio.h>

    int main(void)
    {
        return puts("Hello, Nurse!");
    }
    
    /*  End Program Hello Nurse
     */
    

The first line of Program Hello Nurse,

    #include <stdio.h>

says to include some other stuff in our program.
What other stuff?
In this case, some stuff called stdio.h ("standard eye oh").
It defines `puts`.
(If you want to read more about things like `#include <stdio.h>`, see
[this](../../Appendices/headers.md))

In this chapter, you have seen how to tell the computer to put **characters** on the screen.
A character is a letter, digit, punctuation mark, or symbol that is used in writing.
Most of the keys on your keyboard match a character.

The characters for writing C code are

    { } [ ] ( ) < > = ^ 0123456789
    ! ? . , : ; ' " _   ABCDEFGHIJKLMNOPQRSTUVWXYZ
    # % & * | / - + ~   abcdefghijklmnopqrstuvwxyz

as well as "space," "**new-line**," and three other characters.
The new-line character is used to separate C code into lines of text.

Some details about new-line and the three other characters are presented in the
[Appendix](../../Appendices/characterSet.md).
As a beginner, you probably do not need these details, but you might be curious.
