#include <stdio.h>

#define IN    1
#define OUT   0
#define LIMIT 32

/* Exercise 1-13: Write a program to print a histogram of the lengths of words in its input. It is easy to draw the
 * histogram with the bars horizontal; a vertical orientation is more challenging. */

main()
{
    int wlens[LIMIT];
    int i, n, nchar, wcount, ccount, bcount, state;

    state = OUT;
    wcount = 0;
    bcount = 0;
    ccount = 0;
    for (i = 0; i < LIMIT; ++i)
        wlens[i] = 0;

    printf("\nThe input limit is %d words; please do not input more than %d words.\n\n", LIMIT, LIMIT);
    
    while ((nchar = getchar()) != EOF) {
        if (nchar == ' ' || nchar == '\n' || nchar == '\t') {
            state = OUT;
            ++bcount; /* I will likely need to count blanks for the histogram. */
        }
        else {
            state = IN; /* We must be in a word. Enter IN/counting state. Leave IN for OUT once finished. */
            if (nchar != ' ' && nchar != '\n' && nchar != '\t')
                ++ccount;
            else
                state = OUT;
        }
        if (state == OUT && ccount > 0) {
            wlens[wcount] = ccount;
            ++wcount;
            ccount = 0;
        }
    }

    for (n = 0; n < LIMIT; ++n)
        if (wlens[n] > 0)
            printf(" %d", wlens[n]);
    putchar('\n');
}
