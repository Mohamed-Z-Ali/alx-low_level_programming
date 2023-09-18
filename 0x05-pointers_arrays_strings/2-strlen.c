#include "main.h"
/**
*_strlen - returns the length of a string
* @s: string
*Return: returns lenght;
*/
int _strlen(char *s)
{
char b;
int a;

for (a = 0; b != '\0'; a++)
{
b = s[a];
}
a--;
return (a);
}
