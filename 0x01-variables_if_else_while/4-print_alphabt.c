#include <stdio.h>
/**
*main - main Entry point
*description:A program that prints the English alphabet
*Return: always 0
*/
int main(void)
{
char x = 'a';
while (x <= 'z')
{
if (x != 'e' && x != 'q')
{
putchar(x);
}
x++;
}
putchar('\n');
return (0);
}
