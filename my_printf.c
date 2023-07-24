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
	int num;
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
			}
			else if (*format == 'c')
			{
				_putchar(*format);
				i++;
			}
			else if (*format == 's')
			{
				char *string = va_arg(args, char*);
				while (*string)
				{
					_putchar(*string);
					string++;
					i++;
				}
			}
			else if ((*format == 'd') || (*format == 'i'))
			{
				num = va_arg(args, int);
				print_number(num);
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
