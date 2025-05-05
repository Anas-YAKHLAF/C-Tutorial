#include <stdio.h>
#include <cs50.h>
#include <string.h>

int main(void)
{
    int n[] = {9, 3, 5, 2, 2, 3, 4, 8, 7, 6, 1, 4};

    int c;
    for (int i = 0; i < 12; i++)
    {
        for (int j = i; j < 12; j++)
        {
            if (n[i] > n[j])
            {
                c = n[j];
                n[j] = n[i];
                n[i] = c;
            }
        }
    }

    for (int i = 0; i < 12; i++)
    {
        printf("%i ", n[i]);
    }
}