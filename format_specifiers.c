#include "main.h"
/**
 * print_char - To Prints character
 * @list: a list of arguments
 * Return: Will return the amount of characters printed.
 */
int print_char(va_list list)
{
	_write_char(va_arg(list, int));
	return (1);
}

/**
 * print_string - To Prints a string
 * @list: a list of arguments
 * Return: Will return the amount of characters printed.
 */
int print_string(va_list list)
{
	int j;
	char *str;

	str = va_arg(list, char *);
	if (str == NULL)
		str = "(null)";
	for (j = 0; str[j] != '\0'; j++)
		_write_char(str[j]);
	return (j);
}

/**
 * print_percent - To Prints a percent symbol
 * @list: a list of arguments
 * Return: It Will return the amount of characters printed.
 */
int print_percent(__attribute__((unused))va_list list)
{
	_write_char('%');
	return (1);
}

/**
 * print_integer - It Prints an integer
 * @list: list of arguments
 * Return: Will return the amount of characters printed.
 */
int print_integer(va_list list)
{
	int num_len;

	num_len = print_number(list);
	return (num_len);
}

/**
 * unsigned_integer - It Prints Unsigned integers
 * @list: List of all of the argumets
 * Return: a count of the numbers
 */
int unsigned_integer(va_list list)
{
	unsigned int num;

	num = va_arg(list, unsigned int);

	if (num == 0)
		return (print_unsgined_number(num));

	if (num < 1)
		return (-1);
	return (print_unsgined_number(num));
}
