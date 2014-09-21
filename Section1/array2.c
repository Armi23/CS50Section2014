#include <stdio.h>
#include <cs50.h>
#include <string.h>

int main(int argc, char const *argv[])
{
	// I thought this was arrays???
	string s = "armistrong";

	// What does this print? Oopsies...
	for (int i = 0; i <= strlen(s); ++i)
	{
		printf("%c\n", s[i]);
	}

	return 0;
}
