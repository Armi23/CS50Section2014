#include <stdio.h>
#include <cs50.h>

int main(int argc, char const *argv[])
{

	// What does this print?
    if (argc < 2) 
    {
        printf("I don't have much to work on\n");
        return -1;
    }

	for (int i = 0; i < argc; ++i)
	{
		printf("%s\n", argv[i]);
	}

	return 0;
}
