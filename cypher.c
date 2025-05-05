#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>
// function prototypes :
char encrypting(char c);
char decrypting(char c);
int main(int argc, string argv[])
{
    if (argc != 2)
    {
        printf("missing one command line ! \n");
        return 1;
    }
    else
    {

        string cypher = argv[1];
        int choice;
        do
        {
            choice = get_int("Type '1' for Decrypting and '2' for encrypting : ");
        } while (choice != 1 && choice != 2);

        int count = strlen(cypher);

        // encrypting the message :

        if (choice == 2)
        {
            for (int i = 0; i < count; i++)
            {
                cypher[i] = encrypting(cypher[i]);
            }
            printf("After encryption : %s\n", cypher);
        }

        // decrypting the message:
        if (choice == 1)
        {
            for (int i = 0; i < count; i++)
            {
                cypher[i] = decrypting(cypher[i]);
            }
            printf("After Decryption : %s\n", cypher);
        }
    }
}

char encrypting(char c)
{
    if (c == ' ')
    {
        return '~'; // handling space
    }
    if ((c % 2) != 0)
    {
        return c - 1;
    }
    else
    {
        return c + 1;
    }
}

char decrypting(char c)

{
    if (c == '~')
    {
        return ' '; // handling space
    }
    if ((c % 2) != 0)
    {
        return c - 1;
    }
    else
    {
        return c + 1;
    }
}