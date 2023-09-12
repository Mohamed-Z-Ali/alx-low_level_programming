#include<stdio.h>


int main(void)
{
char c = 'a';
char s = 'A';
while (c <= 'z')
{
putchar(c);
c++;
}
while (s <= 'Z')
{
putchar(s);
s++;
}
putchar('\n');
return (0);
}
