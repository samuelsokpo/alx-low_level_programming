#include "main.h"
#include <stdio.h>

/**
 * main - prints from 1 to 100. Trunc multiples of 3 for Fizz, 5 for buzz
 *
 * Return: 0 on success and the stated ptinr
 */

int main(void)
{
	int i = 1;

	for (; i < 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
			printf("FizzBuzz ");
		else if (i % 3 == 0)
			printf("Fizz");
		else if (i % 5 == 0)
			printf("Buzz");
		else
			printf("%d ", i);
	}
	printf("Buzz\n");

	return (0);
}
                  
