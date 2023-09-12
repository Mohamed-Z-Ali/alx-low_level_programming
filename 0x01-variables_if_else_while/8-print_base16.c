#include<stdio.h>
/**
*main - Prints all single digits of base 16 followed by new line
*
*Return: returns 0
*/
int main(void)
{
char a = '0';
for (; a <= '9'; a++)
{
putchar(a);
if (a == '9')
{
char a = 'a';
for (; a <= 'f'; a++)
{
putchar(a);
}
}
}
putchar('\n');
return (0);
}
