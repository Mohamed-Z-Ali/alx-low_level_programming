#include<stdio.h>
/**
*main - Prints all combinations of three digits with,
* and space followed by new line
*
*Return: returns 0
*/
int main(void)
{
int a, b, c;
for (a = 0; a < 8; a++)
{
for (b = a + 1; b < 9; b++)
{
for (c = b + 1; c < 10; c++)
{
putchar((a % 10) + '0');
putchar((b % 10) + '0');
putchar((c % 10) + '0');
putchar(',');
putchar(' ');
}
}
}
putchar('\n');
return (0);
}
