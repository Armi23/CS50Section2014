/**
 * Some notation with pointers
 */

#include <stdio.h>

int main(int argc, char const *argv[])
{
	int array[10] = {5, 4, 3, 2, 1};
	int* ptr = array;

	printf("First element of array: %d\n", array[0]);
	printf("First element of array: %d\n", *ptr);
	printf("First element of array: %d\n", ptr[0]);

	printf("Second element of array: %d\n", array[1]);
	printf("Second element of array: %d\n", *(ptr + 1));
	printf("Second element of array: %d\n", ptr[1]);
	return 0;
}