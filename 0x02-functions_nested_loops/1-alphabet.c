/**
 * print_alphabet -  prints the alphabet, in lowercase, followed by a new line
 * Return: 0 on Success
 */

#include "main.h"

/**
 * print_alphabet - function to print lower case alphabet
 */
void print_alphabet(void)
{
	char ch;

	ch = 'a';

	while (ch <= 'z')
	{
		_putchar(ch);
		ch++;
	}

	_putchar('\n');
}
