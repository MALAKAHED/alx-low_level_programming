#include "main.h"
#include <stdio.h>
#include <string.h>
int is_prime(int num, int checker)
{
if (checker <= num)
{
if (num % checker == 0)
is_prime(num, checker++);
else
eturn (1);
}
else 
return (0);
}
/**
* is_prime_number - IsPrimeNumber or NO.
*
* Description: Loading...
*
* @n: paramter
*
* Return: 0 or 1.
*/
int is_prime_number(int n)
{   
if (n <= 1)
return (0);
else if (n == 2 || n == 3)
return (1);
else 
is_prime(n/2, 4);   
}
