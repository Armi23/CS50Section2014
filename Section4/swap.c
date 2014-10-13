/**
 * Demostrates a proper swap function in C.
 */

#include <stdio.h>

void swap(int* x, int* y) {
	int temp = *x;
	*x = *y;
	*y = temp;
}


int main(int argc, char const *argv[])
{
	int a = 5;
	int b = 7;
	
	swap(&a, &b);

	printf("a: %d\n", a);
	printf("b: %d\n", b);

	return 0;
}