#include <stdio.h>
/**
*main - main Entry point
*description:a program that prints all single digit numbers
*Return: always 0
*/
int main(void)
{
int z;
for (z = 0; z < 10; z++)
{
putchar("%d", z);
}
putchar("\n");
return (0);
}
