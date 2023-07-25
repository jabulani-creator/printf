#include "main.h"
#include <stdio.h>

/**
 * rev_string - to reverses a string in place
 *
 * @s: string to reverse
 * Return: A pointer to a character
 */
char *rev_string(char *s)
{
	int len;
	int head;
	char temp;
	char *dest;

	for (len = 0; s[len] != '\0'; len++)
	{}

	dest = malloc(sizeof(char) * len + 1);
	if (dest == NULL)
		return (NULL);

	_memcpy(dest, s, len);
	for (head = 0; head < len; head++, len--)
	{
		temp = dest[len - 1];
		dest[len - 1] = dest[head];
		dest[head] = temp;
	}
	return (dest);
}

/**
 * write_base - sends characters to be written on standard output
 * @str: String to parse
 */
void write_base(char *str)
{
	int j;

	for (j = 0; str[j] != '\0'; j++)
		_write_char(str[j]);
}

/**
 * base_len - to Calculates the length for an octal number
 * @num: The number for which the length is being calculated
 * @base: Base to be calculated by
 * Return: An integer representing the length of a number
 */
unsigned int base_len(unsigned int num, int base)
{
	unsigned int j;

	for (j = 0; num > 0; j++)
	{
		num = num / base;
	}
	return (j);
}

/**
 * _memcpy - to copy memory area
 * @dest: the Destination for copying
 * @src: Source to copy from
 * @n: The number of bytes to copy
 * Return: The _memcpy() function returns a pointer to dest.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int j;

	for (j = 0; j < n; j++)
		dest[j] = src[j];
	dest[j] = '\0';
	return (dest);
}
