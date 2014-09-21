#include <stdio.h>

int main(int argc, char const *argv[])
{
	// Why do I say 5?
	int num[5];

	// What does this print?
	for (int i = 0; i < 5; ++i)
	{
		printf("%d\n", num[i]);
	}

	return 0;
}