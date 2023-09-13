#include "3-calc.h"
int el_add(int a, int b);
int el_sub(int a, int b);
int el_mul(int a, int b);
int el_div(int a, int b);
int el_mod(int a, int b);
/**
* el_add - Returns the sum of two numbers.
* @a: The first number.
* @b: The second number.
* Return: The sum of a and b.
*/
int el_add(int a, int b)
{
return (a + b);
}
/**
* el_sub - Returns the difference of two numbers.
* @a: The first number.
* @b: The second number.
* Return: The difference of a and b.
*/
int el_sub(int a, int b)
{
return (a - b);
}
/**
* el_mul - Returns the product of two numbers.
* @a: The first number.
* @b: The second number.
* Return: The product of a and b.
*/
int el_mul(int a, int b)
{
return (a * b);
}
/**
* el_div - Returns the division of two numbers.
* @a: The first number.
* @b: The second number.
* Return: The quotient of a and b.
*/
int el_div(int a, int b)
{
return (a / b);
}
/**
* el_mod - Returns the remainder of the division of two numbers.
* @a: The first number.
* @b: The second number.
* Return: The remainder of the division of a by b.
*/
int el_mod(int a, int b)
{
return (a % b);
}
