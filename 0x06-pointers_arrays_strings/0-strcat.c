#include "main.h"
/**
 * _strcat - a function that concatenates two strings
 * @dest: is a pointer
 * @src: is a pointer
 * Return: pointer dest
 */
char *_strcat(char *dest, char *src)
{
int x = 0, y;
while (dest[x])
x++;
for (y = 0; src[y]; y++)
{
dest[x++] = src[y]
}
return (dest);
}
