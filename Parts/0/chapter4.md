# Chapter 4: Return of Nothing, Definition of Nothing

> Nothing comes from nothing. ---Parmenides

## Functions

All programs have at least one **function** ("funk shun").
Functions tell the computer what to do, _and in what order_.

Functions have four parts: a name, input, a process, and output.

Functions are like pets.
You call them by their _names_, you feed them _input_, and they _process_ it.
The input gets "chewed" and "digested."
Then, stuff comes _out_.
As with pets, some functions are already named.
If you make a function, you must name it.
Some pets can be picky eaters and some will eat almost anything.
Functions can be made to take very few kinds of input or almost any input.

Each function puts out or **returns** only one kind, or **type**, of thing, called the **return type**.
You can also think of the parts of a function like this:

0. what it gives (output),
1. what it is called (name),
2. what it gets (input), and 
3. what it does (process).

## The return keyword

Every function should contain a **return statement**.

For example, we could **define** a `nothing` function with the **function definition**

    void   nothing   (void)   { return; }

The first part of a function definition tells what type of thing the function gives.
The first thing in the definition of `nothing` is the keyword `void`.
So, `nothing` **returns** void, or nothing.

The second part of a function definition tells what the function is called or named.
The second thing in the definition of `nothing` is the name `nothing`.
Therefore, the function is called `nothing`.

The third part of a function definition tells what the function gets.
The third thing in the definition of `nothing` is a set of **parens** ("puh wrens"). (The more common word for "parens" is **parentheses**, "puh ren thuh seas").
The keyword `void` is found inside the parens.
Therefore, `nothing` gets _nothing_.

When you define a function, you _must_ put parens after its name.
Inside the parens, you must tell what the function gets.

The fourth part of a function definition tells what the function does.
The fourth thing in the definition of `nothing` is a set of braces `{}`.
The statement

    return;

is found inside the braces.
This return statement is the only statement between the braces,
so this is the only thing that `nothing` does.
There is _nothing_ between the `return` keyword and the semicolon (`;`), so `nothing` returns _nothing_.
It might be better to say "`nothing` does not return anything."
