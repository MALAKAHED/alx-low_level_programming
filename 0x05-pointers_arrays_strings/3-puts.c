#include "main.h"
/**
 * _puts - a function that prints a string, followed by a new line
 * @str: is a pointer
 */
void _puts(char *str)
{
while (*str)
{
putchar (*str + 0);
str++;
}
putchar ('\n');
}
