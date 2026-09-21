#include "2-main.h"
/**
 * print_alphabet_x10 - Prints the alphabet in lowercase 10 times
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
