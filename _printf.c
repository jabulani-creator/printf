#include "main.h"

/**
 * _printf - It Receives the main string and all the necessary parameters to
 * print a formated string
 * @format: a string containing all the desired characters
 * Return: a total count of the characters printed
 */
int _printf(const char *format, ...)
{
	int print_chars;
	conv f_list[] = {
		{"c", print_char},
		{"s", print_string},
		{"%", print_percent},
		{"d", print_integer},
		{"i", print_integer},
		{"b", print_binary},
		{"r", print_reversed},
		{"R", rot13},
		{"u", unsigned_integer},
		{"o", print_octal},
		{"x", print_hex},
		{"X", print_heX},
		{NULL, NULL}
	};
	va_list arg_list;

	if (format == NULL)
		return (-1);

	va_start(arg_list, format);
	/*Calling parser function*/
	print_chars = parser(format, f_list, arg_list);
	va_end(arg_list);
	return (print_chars);
}
