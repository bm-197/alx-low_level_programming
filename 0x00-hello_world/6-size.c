#include <stdio.h>

/**
 * main - Entry point
 *
 * Return : Always 0 (success)
 */
int main(void)
{
	int charSize = sizeof(char);
	int intSize = sizeof(int);
	int longSize = sizeof(long int);
	int longlongSize = sizeof(long long int);
	int floatSize = sizeof(float);

	printf("Size of char : %d byte(s)\n", charSize);
	printf("Size of int : %d byte(s)\n", intSize);
	printf("Size of long int : %d byte(s)\n", longSize);
	printf("Size of long long int : %d byte(s)\n", longlongSize);
	printf("Size of float : %d byte(s)\n", floatSize);
	return(0);
	
}
