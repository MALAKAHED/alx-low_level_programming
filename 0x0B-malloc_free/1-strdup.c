#include "main.h"
#include <stdlib.h>
/**
 * _strdup - function returns a pointer to a newly allocated space in memory
 * @str: string
 * Return:  returns a pointer to a new string
 * Returns NULL if str = NULL
 */
char *_strdup(char *str)
{
char *p;
int i;
int size;
if (str == NULL)
{
return (NULL);
}
while (size != '\0')
size++;
p = (char *)malloc((sizeof(char) * size)+1);
if (p == NULL)
{
return (NULL);
}
for (i = 0; i < size; i++)
{
str[i] = p[i];
}
free(p);
return (*p);
}
