#include <stdio.h>
/**
* main - main Entry point
* description:A program that prints the English alphabet
* Return: always 0
*/
int main(void)
{
char x;
for (x = 'z' ; x <= 'a' ; x--)
{
putchar(x);
}
putchar("\n");
return (0);
}
