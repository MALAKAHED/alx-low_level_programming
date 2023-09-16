#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints the sum of args poistive numbers
 * @argc: argument count
 * @argv: argument vector
 * Return: Alawys 0
 */
int main(int argc, char *argv[])
{
int i;
int sum = 0;

if (argc > 1)
{
for (i = 1; i < argc; i++)
{
int num = atoi(argv[i]);
if (num <= 0)
{
printf("Error\n");
return 1;
}
sum += num;
}
printf("%d\n", sum);
}
else
{
printf("0\n");
}

return 0;
}
