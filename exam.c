#include <stdio.h>
#include <cs50.h>
#include <stdbool.h>

// Function prototypes
int count_c(string word);
void rev_word(char holder[], int count, string word);
bool pal_check(char holder[], int count, string word);
void upper_word(string word, int count);
int main(void)
{
    // Get input from the user
    string word = get_string("What's your word? ");

    // Count the number of characters in the word
    int count = count_c(word);
    printf("There are \'%i\' characters in the word: \"%s\"\n", count, word);

    // Create a holder array to store the reversed word
    char holder[count + 1]; // +1 for the null terminator

    // Reverse the word and store it in holder
    rev_word(holder, count, word);

    // Check if the word is a palindrome
    if (pal_check(holder, count, word))
    {
        printf("The word is a palindrome.\n");
    }
    else
    {
        printf("The word is not a palindrome.\n");
    }

    // Uppercasing the holder :
    upper_word(word, count);
}

// Function 1: Count the number of characters in the word
int count_c(string word)
{
    int count = 0;
    while (word[count] != '\0')
    {
        count++;
    }
    return count;
}

// Function 2: Reverse the word and store it in holder
void rev_word(char holder[], int count, string word)
{
    for (int i = 0, j = count - 1; i < count; i++, j--)
    {
        holder[i] = word[j];
    }
    holder[count] = '\0'; // Add null terminator to make it a valid string
    printf("The reverse of the word \"%s\" is \"%s\".\n", word, holder);
}

// Function 3: Check if the word is a palindrome
bool pal_check(char holder[], int count, string word)
{
    for (int i = 0; i < count; i++)
    {
        if (holder[i] != word[i])
        {
            return false;
        }
    }
    return true;
}

// Function 4 : Uppercase the word
void upper_word(string word, int count)
{
    for (int i = 0; i < count; i++)
    {
        if (word[i] >= 'a' && word[i] <= 'z')
        {
            word[i] -= 32;
        }
    }
    // holder[count] = '\0'; // Add null terminator to make it a valid string
    printf("The uppercased word is: %s\n", word);
}