#include <stdio.h>
#include <cs50.h>
#include <string.h>
int main(void)
{
    string word = get_string("Enter a word :");
    int size = strlen(word);

    char holder[size + 1];

    strcpy(holder, word);

    for (int i = 0, j = size - 1; i < size; i++, j--)
    {
        holder[i] = word[j];
    }

    if (strcmp(word, holder) == 0)
    {
        printf("'%s' is a palindrome!\n", word);
    }
    else
    {
        printf("'%s' is not palindrome!\n", word);
    }
}