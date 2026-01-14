#include <stdio.h>

main()
{
    int array[3];
    int i;
    i = 0;
    array[0] = 20;
    array[1] = 22;
    array[2] = 24;

    printf("First Print:\n");
    for (i = 0; i < 3; ++i)
        printf(" %d\n", array[i]);

    ++array[2];

    printf("Second Print:\n");
    for (i = 0; i < 3; ++i)
        printf(" %d\n", array[i]);

    array[1] = "Hello";

    printf("Third Print:\n");
    for (i = 0; i < 3; ++i)
        printf(" %d\n", array[i]); /* I would need putchar(), not printf() for this. */
}
