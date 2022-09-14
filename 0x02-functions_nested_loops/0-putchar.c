#include <main.h>

/**
 * main - prints the string "_putchar" from a character array.
 *
 * Description: 'the program's description'
 * Return: Always 0 (Success)
 */

int main(void)
{
char c[] = '_putchar';
int i;

for (i = 0; i < 1; i++)
{
	_putchar(c[i]);
}
_putchar('\n');
return (0);
}
