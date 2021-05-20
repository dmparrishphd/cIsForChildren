Chapter X
=========

In chapter Y, we saw how to get the computer to
write on the screen. We used the `puts` function.



The `puts` function also writes a `new-line` after writing
the string that you tell `puts` to write.

You might not want to write a new-line.
Instead of using `puts`, you could use `fputs`.

`fputs` requires two arguments.

The first of the arguments to `fputs` is a string, just like `puts`.

The second argument to `fputs` is a **stream**.

Streams
-------

A stream is allows your computer to read in a certain way.
The information that your computer reads from a stream
might come from any of many, many sources.
Any source might have its own way of keeping information.
A stream translates the information so that your computer can read it.

Three streams are part of any C program.
You may use any of them.
You may use none of them.

The first stream is called `stdout` ("standard out").
It is an _output_ stream.
This means that information flows in only one direction:
from the computer to the stream.
The `stdout` stream is often connected to the screen.
This setup allows your computer to write to you in
a more-or-less natural way.
When the computer writes an "A" to `stdout`, an "A"
appears on the screen (although it may not appear _immediately_).

The second stream is called `stdin` ("standard in").
It is an _input_ stream.
This means that information flows in only one direction:
from the stream to the computer.
The `stdin` stream is often connected to the keyboard.
This setup allows you to write to your computer in
a more-or-less natural way.
That is, when you press "A" on the keyboard, the computer will read and "A".

The third stream is called `stderr` ("standard error").
The `stderr` stream is often connected to the screen,
just like `stdout`, but it doesn't have to be.


