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
			}
			else if (*format == 'c')
			{
				_putchar(*format);
			}
			else if (*format == 's')
			{
				char *string = va_arg(args, char*);
				while (*string)
				{
					_putchar(*string);
					string++;
				}
			}
		}
		_putchar(*format);
		format++;
	}
	return (0);
}
