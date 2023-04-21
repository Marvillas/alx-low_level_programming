#include "variadic_functions.h"
/**
 * print_all - prints anything
 * @format: a list of types of arguments passed to the function
 *          c: char
 *          i: integer
 *          f: float
 *          s: char * (if the string is NULL, print (nil) instead)
 *          any other char should be ignored
 *
 * Return: void
 */
void print_all(const char * const format, ...)
{
	va_list args;
	unsigned int i = 0, j;
	char *separator = "";
	char *string_arg;

	va_start(args, format);

	while (format && format[i])
	{
		j = 0;
		switch (format[i++])
		{
			case 'c':
				printf("%s%c", separator, va_arg(args, int));
				break;
			case 'i':
				printf("%s%d", separator, va_arg(args, int));
				break;
			case 'f':
				printf("%s%f", separator, va_arg(args, double));
				break;
			case 's':
				string_arg = va_arg(args, char *);
				if (string_arg == NULL)
					string_arg = "(nil)";
				printf("%s%s", separator, string_arg);
				break;
			default:
				j = 1;
				break;
		}
		if (!j && separator[0] == '\0')
			separator = ", ";
	}

	va_end(args);

	printf("\n");
}
