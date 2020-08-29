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
(The h in stdio.h stands for "**header**," meaning something at the head, or top.)
