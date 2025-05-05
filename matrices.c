#include <stdio.h>
#include <cs50.h>
#include <string.h>

int main(void)
{
    int c1;
    int r1;
    int c2;
    int r2;
    char mul;
    do
    {
        mul = get_char("for A x B type : \'1\' OR B x A type \'2\' : ");
    } while ((mul != '1') && (mul != '2'));

    if (mul == '1')
    {
        r2 = get_int("size of row B  :");
        c1 = get_int("size of column A :");
        do
        {
            printf("Make sure the Row A and Column B are identical !!\n");
            r1 = get_int("size of row A :");
            c2 = get_int("size of column B :");
        } while (r1 != c2);
        int A[c1][r1];
        int B[c2][r2];
        printf("\nFilling Matrix A : \n");
        // Filling Matrix A :
        for (int c = 0; c < c1; c++)
        {
            for (int r = 0; r < r1; r++)
            {
                A[c][r] = get_int("Value of column %i row %i : ", c, r);
            }
        }
        // Filling Matrix B :
        printf("\nFilling Matrix B : \n");
        for (int c = 0; c < c2; c++)
        {
            for (int r = 0; r < r2; r++)
            {
                B[c][r] = get_int("Value of column %i row %i : ", c, r);
            }
        }

        // Printing Matrix A :
        printf("\nMatrix A : \n");
        for (int r = 0; r < r1; r++)
        {
            for (int c = 0; c < c1; c++)
            {
                printf("%i ", A[c][r]);
            }
            printf("\n");
        }

        // Printing Matrix B
        printf("Matrix B : \n");
        for (int r = 0; r < r2; r++)
        {
            for (int c = 0; c < c2; c++)
            {
                printf("%i ", B[c][r]);
            }
            printf("\n");
        }

        int C[c2][r1];
        int k = 0;
        for (int c = 0; c < c2; c++) // n + 1
        {
            for (int r = 0; r < r1; r++) // n(n + 1)
            {
                C[c][r] = 0;                 // n * n
                for (int k = 0; k < c1; k++) // n(n(n + 1))
                {
                    C[c][r] = C[c][r] + (A[k][r] * B[c][k]); // n * n * n
                }
            }
        }
        // Printing Matrix C
        printf("Matrix C : \n");
        for (int r = 0; r < r1; r++)
        {
            for (int c = 0; c < c2; c++)
            {
                printf("%i ", C[c][r]);
            }
            printf("\n");
        }
    }
    else
    {
        r1 = get_int("size of row A  :");
        c2 = get_int("size of column B :");
        do
        {
            printf("Make sure the Row B and Column A are identical !!");
            r2 = get_int("size of row B :");
            c1 = get_int("size of column A :");
        } while (r2 != c1);
    }
}