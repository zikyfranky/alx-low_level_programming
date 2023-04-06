#include <string.h>

/**
 * _strstr - Searches for needle in a haystack
 *
 * @haystack: String to search in
 * @needle: Substring to search for
 *
 * Return: Pointer to the beginning of the located substring
 * Or NULL if no match was found
 */

char *_strstr(char *haystack, char *needle)
{
	return (strstr(haystack, needle));
}
