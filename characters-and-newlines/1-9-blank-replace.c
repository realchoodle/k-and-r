#include <stdio.h>

/* Exercise 1-9: Write a program to copy its input to its output, replacing each string with one or more blanks by a single blank. */
/* Get next character, test if number of consecutive blanks are >= 1. If so, replace with one. Otherwise just print characters. */

main()
{
    int nchar, pchar;
    pchar = -2; /* i need something not taken up by EOF or a real char */

    while ((nchar = getchar()) != EOF) {
        if (nchar != pchar)
            putchar(nchar);
        if (nchar == pchar) {
            if (pchar != ' ') /* NOTE: there is an implicit "otherwise, do nothing" */
                putchar(nchar);
        }

        pchar = nchar; /* i need to update vars at end of while */
    }
}
