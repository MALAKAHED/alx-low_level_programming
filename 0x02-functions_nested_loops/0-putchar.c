#include <stdio.h>
#include "main.h"
/**
*main - main Entry point
*description:A program that prints "_putchar"
*Return: always 0
*/
int main(void)
{
char arr[] = "_putchar";
int ml;
for (ml = 0; ml < 8; ml++)
{
_putchar(arr[ml]);
}
_putchar('\n');
return (0);
}
