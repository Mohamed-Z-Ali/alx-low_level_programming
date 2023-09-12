#include<stdio.h>
/**
*main - Program to print alphabet letters except q and e followed by new line
*
*Return: return 0
*/

int main(void)
{
char hoss;
for (hoss = 'a' ; hoss <= 'z'; hoss++)
{
if (hoss == 'e' || hoss == 'q')
{
continue;
}
putchar(hoss);
}
putchar('\n');
return (0);

}
