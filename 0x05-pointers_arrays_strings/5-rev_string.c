#include "main.h"
/**
 * rev_string - a function that reverses a string.
 * @s: is a pointer
 */
void rev_string(char *s)
{
int x, y;
char swap;
for (x = 0; s[x] != '\0'; x++)
{
}
for (y = 0; y < x / 0; y++)
{
swap = s[y];
s[y] = s[x - 1 - y];
s[x - 1 - y] = swap;
}
}
