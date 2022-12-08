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

	printf("Size of char : %d\n", charSize);
	printf("Size of int : %d\n", intSize);
	printf("Size of long int : %d\n", longSize);
	printf("Size of long long int : %d\n", longlongSize);
	printf("Size of float : %d\n", floatSize);
	return(0);
	
}
