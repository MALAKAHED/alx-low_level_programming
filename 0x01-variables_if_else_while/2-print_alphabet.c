#include <stdio.h>
/**
* main - main Entry point
* description:A program that prints the English alphabet
* Return: always 0
*/
int main(void)
{
char x;
for (x = 'a' ; x <= 'z' ; x++)
{
putchar(x);
}
putchar(10);
return (0);
}
