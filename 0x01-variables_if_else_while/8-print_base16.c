#include <stdio.h>
/**
*main - main Entry point
*description:A program that prints the English alphabet
*Return: always 0
*/
int main(void)
{
int z;
char y;
for (z = 48; z < 58 ; z++)
{
putchar(z);
}
for (y = 'a' ; y <= 'f' ; y++)
{
putchar(y);
}
putchar('\n');
return (0);
}
