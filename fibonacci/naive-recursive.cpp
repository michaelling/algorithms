/*

	filename:	naive-recursive.cpp
	author:		michael ling

	description:	implements the naive recursive
			algorithm for solving a fibonacci
			sequence

*/

#include <cstdio>
  
// Finds nth fibonacci number using
// the naive recursion method
int fibonacci(int num)
{
	if (num == 0)
		return 0;
	else if (num == 1)
		return 1;
	else
		return fibonacci(num-1) + fibonacci(num-2);
}

int main(int argc, char *argv[])
{
	int input;

	printf("Fibonacci number: ");
	scanf("%d", &input);

	printf("Result: %d\n", fibonacci(input));

	return 0;
}


