#include "main.h"
/**
 * is_prime_number - Determines if n is a prime number
 * @n: The input integer to check for primality.
 * Return: 1 if n is prime, 0 if n is not prime
 */
int is_prime_number(int n)
{
int i;
/*base case*/
if (n <= 1)
{
return (0);
}
i = 2;
while (i * i <= n)
{
i++;
if (n % i == 0)
{
return (0);
}
}
return (1);
}
