#include "main.h"

void print_diagonal(int n)
{
    int d;
    if (n <=0)
    {
        putchar('\n');
    }
    else
    {
        for(d = 0; d <= n; d++)
        {
            putchar('\'');
        }
        putchar('\n');
    }
}
