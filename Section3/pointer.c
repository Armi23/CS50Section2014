#include <stdio.h>

int main(int argc, char const *argv[])
{
	int* ptr;

	int x = 5;

	ptr = &x;

	printf("Value in x: %d\n", x);
	printf("Address of x in hexadecimal: %p\n", &x);
	printf("Value of p: %p\n", ptr);
	printf("Value of p points to: %d\n", *ptr);
	printf("Address of p: %p\n", &ptr);
	return 0;
}