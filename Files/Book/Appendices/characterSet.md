Some Details about the Character Set
====================================

This appendix is meant to flow from Part 1 Chapter 0.

New-Line
--------

The new-line character is special.
When you are entering C code into your text editor and press the Enter or Return key,
the editor will create an **end-of-line indicator** ("in di kay tor")
and move the cursor to the beginning of the next line of text.
When you compile the code, the compiler substitutes a new-line character for each end-of-line indicator.

Three Other Characters
----------------------

C code may also include "tab," "vertical tab," and "form feed."
However, I strongly suggest that you do not use these characters in your code.
These characters are invisible, but your C code already has two other invisible characters (space and new-line),
so it will be difficult for you to tell them apart.
Additionally, different text editors behave differently when they see one of these three other characters.
