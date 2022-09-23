#include<main.h>
/**
 *print_alphabet-main function
 *
 * Return: Always 0.
 */
void print_alphabet(void)
{
	char c = 'a';
for (c <= 'z')
	{
	 	_putchar(c);
		c++;
	}
	
	_putchar('\n');

	return (0);
}
