#include <stdio.h>

#define BLOCK_SIZE 10

int main(int argc, char const *argv[])
{
	FILE* input = fopen("in.txt", "r");

	char c[BLOCK_SIZE];

	while (fgets(c, BLOCK_SIZE, input) != NULL)
	{
		printf("%s\n", c);
	}

	fclose(input);
	return 0;
}