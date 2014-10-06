#include <stdio.h>

#define BLOCK_SIZE 10

int main(int argc, char const *argv[])
{
	FILE* input = fopen("in.txt", "r");
	FILE* output = fopen("out.txt", "w");

	char c[BLOCK_SIZE];

	while (fgets(c, BLOCK_SIZE, input) != NULL)
	{
		fputs(c, output);
	}

	fclose(input);
	return 0;
}