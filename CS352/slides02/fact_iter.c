/*
 * File: fact_iter.c
 * This program computes factorial of 6 iteratively.
 * This program illustrates simple if and while statements.
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
	
	i = fact = 1;
	while (i <= N) {
		fact *= i;
		i++;
	}
	
	printf("factorial(%d) = %d\n", N, fact);
	return 0;
}
