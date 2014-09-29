#include <stdio.h>


void swap(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;
}

/**
 * Sorts array in place using bubble sort - optimizes to end if there are
 * no swaps
 */
void sort(int array[], int n)
{
    // cycle through array
    for(int k = 0; k < n - 1; k++)
    {
        // optimize; check if there are no swaps
        int swaps = 0;

        // swap adjacent elements if out of order
        for(int i = 0; i < n - 1 - k; i++)
        {
            if (array[i] > array[i + 1])
            {
                swap(array[i], array[i+1]);
                swaps++;
             }
        }

        if (!swaps)
            break;
    }

    for (int i = 0; i < n; ++i)
    {
        printf("%d, ", array[i]);
    }

    printf("\n");
}

int main(void)
{
    int array[] = {5, 3, 4, 7, 9, 8, 1, 6, 2};
    sort(array, 9);
}