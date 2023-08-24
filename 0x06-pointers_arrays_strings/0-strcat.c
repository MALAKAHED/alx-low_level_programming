#include "main.h"
/**
 * _strcat - a function that concatenates two strings
 * @dest: input value
 * @src: input value
 * Return: void
 */
char *_strcat(char *dest, char *src)
{
int x = 0;
int y = 0;
while (dest[x] != '\0')
{
x++;
}
while (src[j] != '\0')
{
dest[x] = src[y];
x++;
y++;
}
dest[x] = '\0';
return (dest);
}
