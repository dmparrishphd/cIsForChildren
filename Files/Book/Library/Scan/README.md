scan
====

Synopsis
--------

    #include "scan.h"
    char * scan ( char * array , int array_size );
    
Description
-----------

The `scan` function will end the program if `array` is `NULL` or
if `array_size` is less than two (2).

If `array` is not `NULL` and `array_size` is greater than or equal to two (2),
The `scan` function reads characters from `stdin` until:

 - a read error occurs,
 - the end-of-file is reached,
 - the array is full, or
 - a new-line character is read.

Characters read are copied into the `array`, one after another.
One character in the `array` is used for the terminating null character.

The `scan` function will end the program if a new-line
character is not read by the time the `array` is full.

Returns
-------

If the `scan` function does not end the program, `scan` returns the `array`.
