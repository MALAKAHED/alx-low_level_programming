#include <stdio.h>
/**
* main - main Entry point
* description:A program that prints the English alphabet
* Return: always 0
*/
int main(void)
{
int e;
for (e = 48; e < 58; e++)
{
putchar(e);
if (e != 57)
{
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
