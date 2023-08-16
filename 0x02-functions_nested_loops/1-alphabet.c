 #include "main.h"
/**
*main - main Entry point
*description:function prints the alphabet in lowercase, followed by new line
*Return: always 0
*/
int main(void)
{
void print_alphabet(void);
char s;
for (s = 'a'; s <= 'z'; s++)
{
_putchar(s);
}
_putchar('\n');
return (0);
}
