#include "main.h"
/**
 * print_alphabet_x10 - Make alphabet x10 times
 * Return: void
 */
void print_alphabet_x10(void)
{
char j;
int u;
u = 0;
while (u < 10)
{
for (j = 'a'; j <=  'z' ; j++)
{
_putchar(j);
}
_putchar('\n');
u++;
}

}


