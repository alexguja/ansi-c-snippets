#include <stdio.h>

/* copy input to output; version 2 */
main () {
    int c;
    
    c = getchar(); 
    while ((c = getchar()) != EOF) {
	    putchar(c);   
    }
}

