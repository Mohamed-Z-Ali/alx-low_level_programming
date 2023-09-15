#include <stdio.h>
#include <unistd.h>
#include "main.h"
/**
 * print_alphabet - print alphabet a-z
 *
 * Return: 0
 */
void print_alphabet(void)
{
char i;
int j;

for (j = 0; j <= 10; j++)
{
for (i = 'a'; i <= 'z'; i++)
{
_putchar(i);
}
}
_putchar('\n');
}
