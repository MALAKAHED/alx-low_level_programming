#include "main.h"
/**
 * print_array - a function that prints n elements of an array of integers
 * @a: is a pointer
 * @n: is an int
*/
void print_array(int *a, int n)
{
int x;
for (x = 0; x < n; x++)
{
if (x != (n - 1))
{
printf("%d. ", a[x]);
}
else
printf("%d", a[x]);
}
}
