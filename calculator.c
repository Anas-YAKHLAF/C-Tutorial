#include <cs50.h>
#include <stdio.h>

// Function prototypes
void get_scores(int scores[], int size);
float calculate_total(int scores[], int size);
void print_scores(int scores[], int size, int total);

int main(void)
{
    int size = get_int("Number of people ? ");
    int scores[size];

    // Get scores from user
    get_scores(scores, size);

    // Calculate total score
    int total = calculate_total(scores, size);

    // Print scores and total
    print_scores(scores, size, total);

    return 0;
}

// Function to get scores from the user
void get_scores(int scores[], int size)
{
    for (int i = 0; i < size; i++)
    {
        scores[i] = get_int("Enter score for person %d: ", i + 1);
    }
}

// Function to calculate total score
float calculate_total(int scores[], int size)
{
    int total = 0;
    for (int i = 0; i < size; i++)
    {
        total += scores[i];
    }
    return total / (float)size;
}

// Function to print scores and total score
void print_scores(int scores[], int size, int total)
{
    printf("\nScores:\n");
    for (int i = 0; i < size; i++)
    {
        printf("Person %d: %d\n", i + 1, scores[i]);
    }
    printf("Total Score: %d\n", total);
}