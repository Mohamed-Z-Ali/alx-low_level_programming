#include "main.h"

void print_triangle(int size)
{
    int i, j, k;
    if(size <= 0)
    {
        putchar('\n');
    }
    else
    {
        for(i = 1; i <= size; i++ )
        {
            for(j = size - 1; j >= i; j--)
            {
                putchar(' ');
            }
            for(k = 1; k <= i; k++)
            {
                putchar('#');
            }
            putchar('\n');
        }
    }
}
