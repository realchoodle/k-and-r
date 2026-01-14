#include <stdio.h>

/* Exercise 1-8: Write a program to count blanks, tabs, and newlines.
 * Newlines are `\n`, tabs are `\t`, and blanks (spaces?) are just ` `. */

main()
{
    int ninput, wspace;

    wspace = 0;
    while ((ninput = getchar()) != EOF) {
        if (ninput == '\n')
            ++wspace;
        if (ninput == '\t')
            ++wspace;
        if (ninput == ' ')
            ++wspace;
    }
     printf("\nTotal newlines, blanks, or tabs: %d\n", wspace);
}
