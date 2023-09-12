#include<stdio.h>
/**
*main - Prints all single digits of base 10 followed by new line
*
*Return: returns 0
*/
int main(void)
{
char ch;
for (ch = 'z' ; ch >= 'a'; ch--)
{
putchar(ch);
}
putchar('\n');
}
