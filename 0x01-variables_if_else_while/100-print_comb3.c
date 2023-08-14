#include <stdio.h>
/**
* main - main Entry point
* description:prints possible different combinations of two digits
* Return: ALways 0 (Success)
*/
int main(void)
{
int j, h;
for (j = 48; j <= 56; j++)
{
for (h = 49; h <= 57; h++)
{
if (h > j)
{
putchar(j);
putchar(h);
if (j != 56 || h != 57)
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
