#include <stdio.h>
#include <cs50.h>
#include <string.h>

int main(void)
{
    string msg = "HELLO WORLD";
    int len = strlen(msg);
    for (int i = 0; i < len; i++)
    {
        for (char k = 'A'; k <= msg[i]; k++)
        {
            for (int j = 0; j < i; j++)
            {
                printf("%c", msg[j]);
            }
            printf("%c\n", k);
        }
    }
}
