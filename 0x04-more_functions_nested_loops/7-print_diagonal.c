#include <stdio.h>
#include "main.h"

/**
 * print_diagonal - prints a diagonal
 * @n: parameter
 * Return:returns nothing
 */

void print_diagonal(int n)

if (n > 0)
{
for (len = 0; len < n; len++)
{
for (space = 0; space < len; space++)
{
putchar(' ');
}

putchar('\\');
if (len == (n - 1))
{
contenue;
}
putchar('\n');
}
}
putchar('\n');
}
