#include <string.h>

/**
 * _strcmp - Compare two strings
 *
 * @s1: First string
 * @s2: Second string
 *
 * Return: 0 if equal, -ASCII of the different character
 *			if s1 ASCII is less the s2 ASCII and +ASCII
 *			if s2 ASCII is less the s1 ASCII
 */

int _strcmp(char *s1, char *s2)
{
	return (strcmp(s1, s2));
}
