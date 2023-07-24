#include <stdio.h>
#include <stdarg.h>
#include "main.h"


/**
 * _printf - our version of printf
 * @format: character to print
 *
 * Return: returns 0 on success
 */
int _printf(const char *format, ...)
{
	int i = 0;
	int num, ch;
	char *string;
	va_list args;
	va_start(args, format);

	while (*format)
	{
		if (*format == '%')
		{
			format++;
			if (*format == '%')
			{
				_putchar('%');
				i++;
				format++;
			}
			else if (*format == 'c')
			{
				ch = va_arg(args, int);
				_putchar(ch);
				i++;
				format++;
			}
			else if (*format == 's')
			{
				string = va_arg(args, char*);
				while (*string)
				{
					_putchar(*string);
					string++;
					i++;
				}
				format++;
			}
			else if ((*format == 'd') || (*format == 'i'))
			{
				num = va_arg(args, int);
				print_number(num);
				format++;
				i++;
			}
		}
		else
		{
			_putchar(*format);
			format++;
			i++;
		}
	}
	va_end(args);
	return (i);
}
