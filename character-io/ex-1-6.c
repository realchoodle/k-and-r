#include <stdio.h>

/* This program is super super simple; I just check to see if the most recent character input is the EOF indicator or not
 * And return 1 if it is not (because then the statement is true). Returns 0 otherwise. */

main()
{
    int c;

    printf("%1d\n", c = (getchar() != EOF));
}
