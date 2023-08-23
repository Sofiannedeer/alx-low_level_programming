#include "main.h"
#include <stdio.h>
/**
 * print_buffer - function that prints a buffer
 * @b: buffer
 * @size: size
 * Return: void
 */
void print_buffer(char *b, int size)
{
int j, o, i;
j = 0;
if (size <= 0)
{
printf("\n");
return;
}
while (j < size)
{
o = size - j < 10 ? size - j : 10;
printf("%08x: ", j);
for (i = 0; i < 10; i++)
{
if (i < o)
printf("%02x", *(b + j + i));
else
printf("  ");
if (i % 2)
{
printf(" ");
}
}
for (i = 0; i < o; i++)
{
int c = *(b + j + i);
if (c < 32 || c > 132)
{
c = '.';
}
printf("%c", c);
}
printf("\n");
j += 10;
}
}
