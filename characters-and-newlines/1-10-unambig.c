#include <stdio.h>

/* Exercise 1-10: Write a program to copy its input to its output, replacing each tab by \t, each backspace by \b, and each backslash by \\.
 * This makes tabs and backspaces visible in an unambiguous way. */

main()
{
    int nchar;

    while ((nchar = getchar()) != EOF) {
        if (nchar != '\\')
            if (nchar != '\t')
                if (nchar != '\b')
                    putchar(nchar);

        if (nchar == '\t') {
            putchar('\\');
            putchar('t');
        }
        if (nchar == '\b') {
            putchar('\\');
            putchar('b');
        }
        if (nchar == '\\') {
            putchar('\\');
            putchar('\\');
        }
    }
}
