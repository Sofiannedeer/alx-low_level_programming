#include <stdio.h>

int main(void)
{
long int n = 612852475143;
long int largestPrimeFactor = 0;
long int i;

/* Find factors of 2 */
while (n % 2 == 0)
{
largestPrimeFactor = 2;
n /= 2;
}
/* Find odd factors */
for (long int i = 3; i * i <= n; i += 2)
{
while (n % i == 0)
{
largestPrimeFactor = i;
n /= i;
}
}
/* If remaining factor is greater than 2 */
if (n > 2)
{
largestPrimeFactor = n;
}

printf("Largest prime factor: %ld\n", largestPrimeFactor);

return (0);
}
