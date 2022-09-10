#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * return: Always 0 (success/correct)
 */

int main(void)
{
int n;

rand(time(0));
n = rand() - RAND_MAX / 2;

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
