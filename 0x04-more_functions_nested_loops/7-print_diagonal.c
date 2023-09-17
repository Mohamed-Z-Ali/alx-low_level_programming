#include "main.h"
/**
 * print_diagonal - draws a diagonal line on the terminal.
 *
 * @n: is the number of times the character \ should be printed.
 */
void print_diagonal(int n)
{
int d;
if (n <= 0)
{
putchar('\n');
}
else
{
for (d = 0; d <= n; d++)
{
putchar('\\');
}
putchar('\n');
}
}
