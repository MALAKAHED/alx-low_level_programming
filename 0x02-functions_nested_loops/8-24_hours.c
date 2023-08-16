#include "main.h"
/**
 * jack_bauer - prints every minute of the day of Jack Bauer
 * starting from 00:00 to 23:59
 */
void jack_bauer(void)
{
int p, b;
p = 0;
while (p < 24)
{
b = 0;
while (j < 60)
{
_putchar((p / 10) + '0');
_putchar((p % 10) + '0');
_putchar(':');
_putchar((b / 10) + '0');
_putchar((b % 10) + '0');
_putchar('\n');
b++;
}
p++;
}
}
