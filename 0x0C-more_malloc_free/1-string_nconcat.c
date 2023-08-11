#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - Concatenates two strings
 * @s1: string
 * @s2: string
 * @n: integer
 * Return: Boolean
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *cat;

	unsigned int len1 = 0;
	unsigned int len2 = 0;
	unsigned int i;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (s1[len1] != '\0')
		len1++;

	while (s2[len2] != '\0')
		len2++;

	if (n >= len2)
		n = len2;

	cat = malloc(sizeof(char) * (n + len1 + 1));

	if (cat == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
		cat[i] = s1[i];

	for (i = 0; i < n; i++)
		cat[i + len1] = s2[i];

	cat[i + len1] = '\0';

	return (cat);
}
