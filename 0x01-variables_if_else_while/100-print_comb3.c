#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * Return: Always 0 (success)
 */

int main(void)
{
	int num1, num2;
	 for (num1 = 48; num1 <= 57; num1++)
	 {
		 for (num2 = 48; num2 <= 57; num2++)
		 {
			 putchar(num1);
			 purchar(num2);
			 if (num1 + num2)
			 {
				 putchar(44);
				 puutchar(32);
			 }
		 }
	 }
	 putchar(10);
	 return (0);
}
