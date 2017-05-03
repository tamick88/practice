/*
 * File: simple_0.c
 * 
 * Purpose: introduce simple declarations and assignments
 */

#include <stdio.h>

int x,y;

int main()
{
	int z = 12;
	
	x = z-10;
	y = x*x;
	
	printf("x = %d, y = %d\n", x,y);
	return 0;
}
