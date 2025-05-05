#include <stdio.h>
#include <cs50.h>
#include <string.h>

int main(void)
{

    int rA = get_int("numbers of rows for matrix A? ");
    int cA = get_int("numbers of columns for matrix A? ");

    int A[rA][cA];

    int rB = get_int("numbers of rows for matrix B? ");
    int cB = get_int("numbers of columns for matrix B? ");

    int B[rB][cB];
    // filling Matrix A
    printf("Filling matrix A : \n");
    for (int y = 0; y < rA; y++)
    {
        for (int x = 0; x < cA; x++)
        {
            A[y][x] = get_int("value of index %i , %i : ", y + 1, x + 1);
        }
    }
    // filling Matrix B
    printf("Filling matrix B : \n");
    for (int y = 0; y < rB; y++)
    {
        for (int x = 0; x < cB; x++)
        {
            B[y][x] = get_int("value of index %i , %i : ", y + 1, x + 1);
        }
    }

    // printing matrix A:
    printf("Matrix A :\n");
    for (int y = 0; y < rA; y++)
    {
        for (int x = 0; x < cA; x++)
        {
            printf("%i ", A[y][x]);
        }
        printf("\n");
    }

    // printing matrix B:
    printf("Matrix B :\n");
    for (int y = 0; y < rB; y++)
    {
        for (int x = 0; x < cB; x++)
        {
            printf("%i ", B[y][x]);
        }
        printf("\n");
    }

    printf("Matrix C the multiplication of A x B\n");
    int C[rA][cB];
    for (int y = 0; y < rA; y++)
    {
        for (int x = 0; x < cB; x++)
        {
            C[y][x] = 0;
            for (int k = 0; k < cB; k++)
            {
                C[y][x] += (A[y][k] * B[k][x]);
            }
        }
    }
    // printing matrix C:
    printf("Matrix C :\n");
    for (int y = 0; y < rA; y++)
    {
        for (int x = 0; x < cB; x++)
        {
            printf("%i ", C[y][x]);
        }
        printf("\n");
    }
}