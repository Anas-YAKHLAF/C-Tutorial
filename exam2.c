#include <stdio.h>
#include <cs50.h>
#include <string.h>

int main(void)
{
    string word = get_string("type your word : ");
    int size = strlen(word);
    for (int i = 0; i < size; i++)
    {
        for (char j = 'A'; j <= word[i]; j++)
        {
            for (int k = 0; k < i; k++)
            {
                printf("%c", word[k]);
            }
            printf("%c\n", j);
        }
    }
}