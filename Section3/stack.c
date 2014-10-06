#include <stdio.h>

void end(void) {
	printf("Top of stack\n");
}

void recurse(int num) {

	if (num > 0) {
		printf("On level: %d\n", num);
		recurse(num - 1);
	}

	else {
		end();
	}

	printf("Leaving level: %d\n", num);
}


int main(int argc, char const *argv[])
{
	recurse(5); 
}