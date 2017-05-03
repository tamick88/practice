/*
 * File: fact_iter-1.c
 * This program computes factorial of 6 iteratively.
 * This probram illustrates simple for statements.
 */

#include <stdio.h>

int N = 6;

int main()
{
	int i, fact;
	
	if (N < 0) {
		fprintf(stderr, "factorial undefined for negative numbers\n");
		return -1;
	}
	
	for (i = 1, fact = 1; i <= N; i++) {
		fact *= i;
	}
	
	printf("factorial(%d) = %d\n", N, fact);
	return 0;
}
