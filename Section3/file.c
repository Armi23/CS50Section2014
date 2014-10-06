#include <stdio.h>

int main(int argc, char const *argv[])
{
	FILE* input = fopen("in.txt", "r");

	char c;

	c = fgetc(input);
	while (c != EOF)
	{
		printf("%c\n", c);
		c = fgetc(input);
	}

	fclose(input);

	return 0;
}