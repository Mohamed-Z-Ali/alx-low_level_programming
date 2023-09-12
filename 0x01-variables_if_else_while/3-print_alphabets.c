#include<stdio.h>
/**
* main - Entry point
*
* Description: print alphabet in lowercase then in uppercase
*
* Return: Always 0 (Success)
*/

int main(void)
{
char c = 'a';
char s = 'A';
/*prints a - z*/
while (c <= 'z')
{
putchar(c);
c++;
}
/*prints A - Z*/
while (s <= 'Z')
{
putchar(s);
s++;
}
putchar('\n');
return (0);
}
