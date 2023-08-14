#include <stdio.h>
/**
*main - main Entry point
*description:a program prints possible combinations of two two-digit numbers
*Return: always 0
*/
int main(void)
{
int b, j;
for (b = 0; b < 100; b++)
{
for (j = 0; j < 100; j++)
{
if (b < j)
{
putchar((b / 10) + 48);
putchar((b % 10) + 48);
putchar(' ');
putchar((j / 10) + 48);
putchar((j % 10) + 48);
if (b != 98 || j != 99)
{
putchar(',');
putchar(' ');
}
}
}
}
putchar('\n');
return (0);
}
