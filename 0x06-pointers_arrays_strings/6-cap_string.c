#include "holberton.h"

/**
 * cap_string - Capitalizes all words of a string.
 * @s: String.
 *
 * Return: Pointer to the changed string.
 */
char *cap_string(char *s)
{
	int i = 1;

	if (s[0] >= 'a' && s[0] <= 'z')
	{
		s[0] = s[0] - 32;
	}
	for (; s[i]; i++)
	{
		if ((s[i - 1] == ' ' || s[i - 1] == '\n' || s[i - 1] == '\t'
		     || s[i - 1] == ',' || s[i - 1] == ';' || s[i - 1] == '!'
		     || s[i - 1] == '?' || s[i - 1] == '"' || s[i - 1] == '('
		     || s[i - 1] == ')' || s[i - 1] == '{' || s[i - 1] == '}'
		     || s[i - 1] == '.') && (s[i] > 'a' && s[i] < 'z'))
		{
			s[i] = s[i] - 32;
		}
	}
	return (s);
}
