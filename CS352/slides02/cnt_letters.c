/*
 * Reads in a sequence of strings from stdin and prints out number of letters in each string.
 */

#include <stdio.h>

int main()
{
	char str[32];
	int i;
	
	while (scanf("%31s", str) != EOF ) {
		for (i = 0; str[i] != '\0'; i++);
		printf("%s has %d characters\n", str, i);
	}
	
	return 0;
}
