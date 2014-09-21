#include <stdio.h>
#include <cs50.h>

int fib(int num)
{
    
    // Always base case
    if (num < 2) 
    {
        return num;
    }
    
    return fib(num - 1) + fib(num - 2);
}

int main(int argc, char const *argv[])
{

	// Once more, what is going to get printed?
	printf("%d\n", fib(5));

	return 0;
}
