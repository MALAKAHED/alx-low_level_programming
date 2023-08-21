#include "main.h"
/**
 *  swap_int - a function that takes a pointer.
 *  @a: is an int to be checked
 *  @b: is an int to be checked
 *  Return: always 0.
 */
void swap_int(int *a, int *b)
{
int x;
x = *a;
*a = *b;
*b = x;
}
