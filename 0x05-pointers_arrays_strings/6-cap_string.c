#include "holberton.h"
/**
 * cap_string - Capitalizes first letter of words
 * @a: character
 * Return: a
 */
char *cap_string(char *a)
{
	int i;

	i = 0;
	while (a[i] != '\0')
	{
		if ((a[i] >= 'a' && a[i] <= 'z') && (a[i] == a[0] || a[i - 1] == ' ' ||
		a[i - 1] == '\t' || a[i - 1] == '\n' || a[i - 1] == ',' ||
		a[i - 1] == ';' || a[i - 1] == '.' || a[i - 1] == '!' ||
		a[i - 1] == '?' || a[i - 1] == '"' || a[i - 1] == '(' ||
		a[i - 1] == ')' || a[i - 1] == '{' || a[i - 1] == '}'))
			a[i] = a[i] - 32;
		i++;
	}
	return (a);
}
