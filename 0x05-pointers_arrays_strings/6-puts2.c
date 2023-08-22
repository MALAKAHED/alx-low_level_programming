#include "main.h"
/**
 * puts2 - a function that prints every other character of a string
 * @str: is a pointer
*/
void puts2(char *str)
{
int x;
for (i = 0; str[x] != '\0'; ++x)
{
if (x % 2 == 0)
{
putchar(str[x]);
}
putchar('\n');
}
}
