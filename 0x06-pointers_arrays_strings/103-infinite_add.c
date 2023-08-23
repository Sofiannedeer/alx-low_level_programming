#include "main.h"
/**
 * rev_string - reverse array
 * @n: int
 * Return: 0
 */
void rev_string(char *n)
{
int u = 0;
int k = 0;
char t;
while (*(n + u) != '\0')
{
u++;
}
u--;
for (k = 0; k < u; k++, u--)
{
t = *(n + k);
*(n + k) = *(n + u);
*(n + u) = t;
}
}
/**
 * infinite_add - func that adds two num
 * @n1: text representation of first num to add
 * @n2: text representation of second num to add
 * @r: pointer to buffer
 * @size_r: buffer size
 * Return: pointer to calling func
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
int w = 0, u = 0, k = 0, s = 0;
int l1 = 0, l2 = 0, v = 0;
while (*(n1 + u) != '\0')
u++;
while (*(n2 + k) != '\0')
k++;
u--;
k--;
if (k >= size_r || u >= size_r)
return (0);
while (k >= 0 || u >= 0 || w == 1)
{
if (u < 0)
l1 = 0;
else
l1 = *(n1 + u) -'0';
if (k < 0)
l2 = 0;
else
l2 = *(n2 + k) -'0';
v = l1 + l2 + w;
if (v >= 10)
w = 1;
else
w = 0;
if (s >= (size_r - 1))
return (0);
*(r + s) = (v % 10) + '0';
s++;
k--;
u--;
}
if (s == size_r)
return (0);
*(r + s) = '\0';
rev_string(r);
return (r);
}
