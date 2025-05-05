#include <stdio.h>
#include <cs50.h>
#include <string.h>
void recursive(int n);
int factorial(int n);
int main(void)
{
    int number = get_int("type number of rows : ");
    recursive(number);
    int fac = factorial(number);
    printf("the factorial of the number %i is : %i", number, fac);
}

void recursive(int n)
{
    if (n <= 0)
    {
        return;
    }
    recursive(n - 1);
    for (int i = 0; i < n; i++)
    {
        printf("#");
    }

    printf("\n");
}

int factorial(int n)
{
    if (n == 0 || n == 1)
    {
        return 1;
    }
    else
    {
        return n * factorial(n - 1);
    }
}