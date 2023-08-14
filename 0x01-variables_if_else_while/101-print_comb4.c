#include <stdio.h>
/**
* main - main Entry point
* description:prints all possible different combinations of three digits
* Return: always 0 (Success)
*/
int main(void)
{
int q, w, l;
for (q = 48; q < 58; q++)
{
for (w = 49; w < 58; w++)
{
for (l = 50; l < 58; l++)
{
if (l > w && w > q)
{
putchar(q);
putchar(w);
putchar(l);
if (q != 55 || w != 56)
{
putchar(',');
putchar(' ');
}
}
}
}
}
putchar('\n');
return (0);
}
