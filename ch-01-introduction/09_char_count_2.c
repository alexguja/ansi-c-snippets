#include <stdio.h>

/* count characters in input; version 2 */
main() 
{
    long nc;

    for (nc = 0; getchar() != EOF; ++nc)
        ;
    printf("%1d\n", nc);
}



