#include "main.h"
/**
 * cap_string - Capitalizes all words of a string.
 * @str: The string to be capitalized.
 * Return: A pointer to the changed string.
 */
char *cap_string(char *str)
{
int x = 0;
while (str[x])
{
x++;
if (str[x - 1] == ' ' ||
str[x - 1] == '\t' ||
str[x - 1] == '\n' ||
str[x - 1] == ',' ||
str[x - 1] == ';' ||
str[x - 1] == '.' ||
str[x - 1] == '!' ||
str[x - 1] == '?' ||
str[x - 1] == '"' ||
str[x - 1] == '(' ||
str[x - 1] == ')' ||
str[x - 1] == '{' ||
str[x - 1] == '}' ||
x == 0)
x++;
}
return (str);
}
