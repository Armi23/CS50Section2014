#include <stdio.h>


int main(void)
{
    int i;
    int array[5];

    printf("%d\n", sizeof(i));
    for (i = 0; i <= sizeof(array); i++)
    {
        array[i] = 0;
    }

    return 0;
}
