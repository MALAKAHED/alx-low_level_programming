#include "main.h"
/**
*print_last_digit - function that prints the last digit of a number
*@n: the int to extract the last digit from
*Return: the value of the last digit
*/
int print_last_digit(int n)
{
int z;
if (z >= 0)
{
z = n % 10;
}
else
{
z = (n & -1) % 10;
_putchar(z);
}
return (0);
}
