#include "main.h"
/**
 * _strcat - a function that concatenates two strings
 * @dest: is a pointer
 * @src: is a pointer
 * Return: void
 */
char *_strcat(char *dest, char *src)
{
int x = 0, y;
while (dest[x] != '\0')
{
x++;
}
for (y = 0; src[y] != 0; y++)
{
dest[x++] = src[y]
}
dest[x] = '\0';
return (dest);
}
