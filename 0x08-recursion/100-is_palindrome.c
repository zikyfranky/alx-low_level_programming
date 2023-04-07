#include <stdio.h>
#include <string.h>

/**
 * _check_palindrome - checks the characters recursively for palindrome
 * @s: string to check
 * @i: iterator
 * @len: length of the string
 *
 * Return: 1 if palindrome, 0 if not
 */
int _check_palindrome(char *s, int i, int len)
{
	if (*(s + i) != *(s + len - 1))
		return (0);
	if (i >= len)
		return (1);
	return (_check_palindrome(s, i + 1, len - 1));
}

/**
 * is_palindrome - Checks if the string is palindrome
 *
 * @s: String to check
 *
 * Return: 1 if palindrome else 0
 */

int is_palindrome(char *s)
{
	int len = strlen(s);

	if (!*s)
		return (1);

	return (_check_palindrome(s, 0, len));
}
