#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
* main - main Entry point
* description: A program that tells you the number is positive or negative
* Return: always 0
* more headers goes there
* betty style doc for function main goes there
*/
int main(void)
{
	int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
if (n > 0)
{
printf("%d is positive\n", n);
}
else if (n == 0)
{
printf("%d is zero\n", n);
}
else
printf("%d is negative\n", n);
return (0);
}
