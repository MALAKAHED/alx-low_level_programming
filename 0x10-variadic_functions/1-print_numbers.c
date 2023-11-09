#include "variadic_functions.h"
/**
 * print_numbers - a function that prints numbers
 * @separator: string to be printed between numbers
 * @n: the number of integers passed to the function
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list numbers;
unsigned int i;
va_start(numbers, n);
for (i = 0; i < n; i++)
{
printf("%d", va_arg(numbers, int));
}
if (separator == NULL)
{
printf("%s", separator);
}
printf("\n");
va_end(numbers);
}