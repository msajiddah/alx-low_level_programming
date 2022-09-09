#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * return: Always 0 (seccess/correct)
 */

int main(void)
{
int n;

srand(time(0));
n = rand() - RAND-MAX / 2;

if (n == 0)
{
printf("%i is Zero\n", n);
}

else if (n < 0)
{
printf("%i is negative\n", n);
}

else
{
printf("%i is positive\n", n);
}

return (0);
}
