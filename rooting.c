#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int p = 0;
    for (int i = 1; p <= 64; i++)
    {
        p = p + i;
    }
    printf("%i", p);
}