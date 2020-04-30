# Chapter 1: Anything, Anywhere, and Nowhere

> "Where are you going?"
>
> "Looks like I’m going nowhere."

---George Lucas, _Star Wars_

## Where?

Sometimes you need to know where something is.
Your house has an address.
The address tells where your house is.
In C, an address is something that tells where part of your program is.
Addresses are also called **pointers**.
In your imagination, you can think of a pointer as a finger that points to something.

In the [last chapter](https://github.com/dmparrishphd/cIsForChildren/blob/master/Parts/0/chapter0.md), 
you learned that the keyword `void` stands for _nothing_.

But, as in English, a word in C might have more than one meaning.
In C, `void` may also mean "nothing _in particular_" or "anything."

If you want your computer to keep track of where anything is,
you could use the keyword `void` together with a **star** (`*`).
For example, you could use the statement:

    void * anywhere;

In this statement, `anywhere` is a name.
That statement tells the computer to make a pointer called `anywhere`.
Here, `*` (star) means "pointer."
And `void` tells what kind of pointer: no kind in particular, or any kind.

If you give that statement to your computer,
you are telling it that `anywhere` is a certain place in your computer.
The computer will find a _particuar_ place for you---
at least, it will try.
That place could be anywhere in your computer.
That place could be anywhere because you have not told it where.

## What?

What is at `anywhere`?
You won't know unless you put something there or ask the computer to tell you what's there.

The `anywhere` pointer _could_ point to the sequence of letters and punctuation marks from Carroll's poem---
and, no, I don’t expect you to read it:

    'Twas brillig, and the slithy toves\nDid gyre
    and gimble in the wabe:\nAll mimsy were the
    borogoves,\nAnd the mome raths outgrabe.\n

## Nowhere

When you tell the computer to make a pointer,
you can also tell it to make the pointer point nowhere,
like this:

    void * nowhere = (void *)0;

The stuff on the left side of the equals sign tells the computer to make a pointer.
The equals sign tells the computer that you are going to tell it where the pointer should point.
The stuff on the right side tells the computer where the pointer should point:
`(void *)0` means _nowhere_.

In this case, `nowhere` is a name that means _nowhere_ because the
stuff on the right side of the equals sign _means_ "nowhere."

In your computer, everything is somewhere.
The only thing that can be nowhere is _nothing_.
Now, `nowhere` is somewhere.
But `nowhere` _points_ nowhere.
You could also say that nowhere points to nothing.

## Who?

You can name anything.
In this chapter, you have already seen how to name pointers.
Names let you tell the computer what to do with the things that have those names.
Without names, you can't write even one C program.

Some other examples of names you can use in your C programs are `main`, `Thing1`, and `George`.
You can name the things you make _almost_ anything.
But names must follow these rules:

0. Names must begin with a letter of the English alphabet or the underscore, _.

1. Names may have English letters, the underscore, and the digits 0, 1, 2, 3, 4, 5, 6, 7, 8, and 9 only.

2. Names should be shorter than 32 letters, digits, and underscores.

(See Figure 2.) These rules won’t let you make the name John
Jacob Jingleheimer Schmidt, but the rules will let you make
the names JohnJacobJingleheimerSchmidt and John_Jacob_
Jingleheimer_Schmidt. Your program might not do what you want
if you try to use both John_Jacob_Jingleheimer_Schmidt1 and
John_Jacob_Jingleheimer_Schmidt2 because they each have
the same first 31 letters, digits, and underscores. The computer may
ignore the 1 and the 2 at the end of the names. Then the two names
will look the same. John_Jacob_Jingleheimer_Schmidt1 might
think, “John_Jacob_Jingleheimer_Schmidt! His name is my
name, too!”
You have a lot of freedom when you make names. Use that freedom
wisely. I think you should use names that are “as simple as possible,
but not simpler.” That’s what Einstein said about everything. If you are
naming a thing, use a noun. If you are naming an action, use a verb.
