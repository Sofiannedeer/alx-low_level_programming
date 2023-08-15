#include "main.h"
/**
 * times_table - Prints the 9 time table, from 0
 * Return: empty output
 */
void times_table(void)
{
int m, n, o, q, p;

for (m = 0 ; m <= 9 ; m++)
{
for (n = 0 ; n <= 9 ; n++)
{
o = m * n;
if (o > 9)
{
q = o % 10;
p = (o - q) / 10;
_putchar(44);
_putchar(32);
_putchar(p + '0');
_putchar(q + '0');
}
else
{
if (n != 0)
{
_putchar(44);
_putchar(32);
_putchar(32);
}
_putchar(o + '0');
}
}
_putchar('\n');
}
}
