#include "holberton.h"

/**
 * _puts - prints a string
 * @s: pointer to string
 * Return: Always 0.
 */
void print_rev(char *s)
{
	int i;

	i = 0;
	while (s[i])
	{
	i++;
	}
	while (s[i] >= '\0')
	{
		_putchar(s[i]);
		i--;
	}
	_putchar('\n');
}