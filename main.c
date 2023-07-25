#include <stdio.h>
#include "main.h"
#include <limits.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	int len;
	int len2;
	unsigned int ui;
	void *addr;

	len = _printf("Let's try to printf a simple sentence.\n");
	len2 = printf("Let's try to printf a simple sentence.\n");
	ui = (unsigned int)INT_MAX + 1024;
	addr = (void *)0x7ffe637541f0;
	_printf("Length:[%d, %i]\n", len, len);
	printf("Length:[%d, %i]\n", len2, len2);
	_printf("Negative:[%d]\n", -762534);
	printf("Negative:[%d]\n", -762534);
/*	_printf("Unsigned:[%u]\n", ui);
	printf("Unsigned:[%u]\n", ui);
	_printf("Unsigned octal:[%o]\n", ui);
	printf("Unsigned octal:[%o]\n", ui);
	_printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
	printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);  */
	_printf("Character:[%c]\n", 'H');
	printf("Character:[%c]\n", 'H');
	_printf("String:[%s]\n", "I am a string !");
	printf("String:[%s]\n", "I am a string !");
/*	_printf("Address:[%p]\n", addr);
	printf("Address:[%p]\n", addr); */
	len = _printf("Percent:[%%]\n");
	len2 = printf("Percent:[%%]\n");
	_printf("Len:[%d]\n", len);
	printf("Len:[%d]\n", len2);
/*	_printf("Unknown:[%r]\n");
	printf("Unknown:[%r]\n"); */
	_printf("d\n", 0);
	printf("%d\n", 0);
	_printf("Negative:[%d]\n", -762534);
	printf("Negative:[%d]\n", -762534);
	_printf("big:[%d]\n", 1560133635);
	printf("big:[%d]\n", 1560133635);
	_printf("Negative:[%d]\n", -2035065302);
	printf("Negative:[%d]\n", -2035065302);
	printf("\n########### other tests #########\n\n");
	_printf("A mix of %%d, %%c, and regular text.\n");
	printf("A mix of %%d, %%c, and regular text.\n");
	_printf("Unsupported: %x\n", 42);
	printf("Unsupported: %x\n", 42);
	char specialChar = '\n';
	_printf("Special Character: %c\n", specialChar);
	printf("Special Character: %c\n", specialChar);
	int negativeLargeNum = -2147483648; // Minimum value for a 32-bit integer
	_printf("Negative Large Integer: %d\n", negativeLargeNum);
	printf("Negative Large Integer: %d\n", negativeLargeNum);
	int largeNum = 2147483647; // Maximum positive value for a 32-bit integer
	_printf("Large Integer: %d\n", largeNum);
	printf("Large Integer: %d\n", largeNum);
	char *longStr = "This is a very long string that exceeds the buffer size";
	_printf("Long String: %s\n", longStr);
	printf("Long String: %s\n", longStr);
	char *nullStr = NULL;
	_printf("Null String: %s\n", nullStr);
	printf("Null String: %s\n", nullStr);
	char *percentStr = "100%";
	_printf("Percentage: %s\n", percentStr);
	printf("Percentage: %s\n", percentStr);
	_printf("");
	printf("");
	return (0);
}
