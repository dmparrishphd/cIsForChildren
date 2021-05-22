    #include "scan.h"

    #include <stdio.h>
    #include <stdlib.h>
    #include <string.h>

    void quit ( const char * message )
    {
A:      fputs ( message , stderr ) ;
B:      exit ( EXIT_FAILURE ) ;
    }

    char * scan ( char * array , int array_size )
    {
C:      if ( ! array ) quit (
            "Domain error in scan: NULL array.\n" ) ;
D:      if ( array_size < 2 ) quit (
            "Domain error in scan: array too short.\n" ) ;
E:      fgets ( array , array_size , stdin ) ;
F:      if ( ferror ( stdin ) ) quit (
            "Read error in scan.\n" ) ;
G:      if ( feof ( stdin ) ) quit (
            "Error in scan: unexpected end-of-file.\n" ) ;
H:      if ( strchr ( array , '\n' ) ) return array ;
I:      quit ( "Range error in scan: long line.\n" ) ;
    }
