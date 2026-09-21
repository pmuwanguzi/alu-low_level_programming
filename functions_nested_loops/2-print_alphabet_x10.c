#include "main.h"
/**
 * print_alphabet - Prints the alphabet in lowercase
 *
 * Return: void (nothing)
 */
void print_alphabet_x10(void)
{
	int count;
	char i;
	for (count = 0; count < 10; count++)
	{
        	for (i = 'a'; i <= 'z'; i++)
                	_putchar(i);
        	_putchar('\n');
	}
}
