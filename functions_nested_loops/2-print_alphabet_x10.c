#include "main.h"
/**
 * print_alphabet - Prints the alphabet in lowercase
 *
 * Return: void (nothing)
 */
void print_alphabet(void)
{
	int count = 1;
	while (count <= 10)
	{
		char i;

        	for (i = 'a'; i <= 'z'; i++)
                	_putchar(i);
        		_putchar('\n');
			count++;
	}
}
