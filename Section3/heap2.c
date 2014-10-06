#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
	
	int* ptr = malloc(5*sizeof(int));

	// Not the right way to iterate
	for (int i = 0; i < 5; ++i)
	{
		printf("%d\n", *ptr + i);
	}

	*ptr = 5;
	printf("%d\n", *ptr);
	return 0;
}