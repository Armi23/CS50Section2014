#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
	
	int* ptr = malloc(sizeof(int));
	printf("%d\n", *ptr);

	*ptr = 5;
	printf("%d\n", *ptr);
	return 0;
}