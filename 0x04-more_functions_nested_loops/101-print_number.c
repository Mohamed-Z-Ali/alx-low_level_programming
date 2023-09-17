#include "main.h"

/**
 * print_number - print any integer.
 *
 * @n: integer for print.
 */

void print_number(int n)
{
unsigned int d = n;

if (n < 0)
{
putchar('-');
d = -d;
}

if (d > 9)
{
print_number(d / 10);
}

putchar((d % 10) + '0');

}
