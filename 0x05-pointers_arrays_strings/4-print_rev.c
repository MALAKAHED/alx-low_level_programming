#include "main.h"
/**
 * print_rev - a function that prints a string in reverse
 * @s: is a pointer
 */
void print_rev(char *s)
{
int x;
while (s[x])
{
x++;
while (x--)
{
putchar (s[x]);
}
}
putchar ('\n');
return (0);
}
