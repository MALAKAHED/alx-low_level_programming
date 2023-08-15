#include <stdio.h>
#include "main.h"
/**
* _putchar - writes the character c to stdout
* @c: The character to print
* Return: On success 1.
* On error, -1 is returned, and errno is set appropriately.
*/
int _putchar(char c)
{
return (write(1, &c, 1));
}
/**
*main - main Entry point
*description:A program that prints "_putchar"
*Return: always 0
*/
int main(void)
{
printf("_putchar");
printf("10");
return (0);
}
