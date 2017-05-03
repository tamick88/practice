/*
 * File: fact_rec.c
 * This program computes factorial of 6 recursively.
 * This program illustrates (recursive) function calls.
 */

#include <stdio.h>

int N = 6;

int factorial(int x)
{
	if (x < 0) {
		fprintf(stderr, "factorial undefined for negative numbers\n");
		return -1;
	}
	
	else if (x == 0 ) {
		return 1;
	}
	
	else {
		return x * factorial(x-1);
	}
}

int main()
{
	printf("factorial(%d) = %d\n", N, factorial(N));
	return 0;
}
