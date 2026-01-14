#include <stdio.h>

/* 1-12: Write a program that prints its output one word per line. */

main()
{
    int nchar;

    while ((nchar = getchar()) != EOF) {
        if (nchar == ' ' || nchar == '\t')
            putchar('\n');
        else
            putchar(nchar);
    }
}
