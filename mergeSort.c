#include <stdio.h>
#include <cs50.h>
#include <string.h>
void mergeSort(int array[], int length);
void merge(int leftArray[], int rightArray[], int array[], int leftSize, int rightSize);

int main(void)
{
    int array[] = {8, 2, 5, 3, 4, 7, 6, 1};
    int length = sizeof(array) / sizeof(array[0]);

    mergeSort(array, length);
    for (int i = 0; i < length; i++)
    {
        printf("%d ", array[i]); // Changed %c to %d to print integers
    }
    printf("\n");
}

void mergeSort(int array[], int length)
{
    if (length <= 1)
    {
        return; // Base Case
    }

    int middle = length / 2;
    int leftArray[middle];
    int rightArray[length - middle];

    int i = 0; // for left array
    int j = 0; // for right array

    for (int i = 0; i < length; i++)
    {
        if (i < middle)
        {
            leftArray[i] = array[i];
        }
        else
        {
            rightArray[j] = array[i];
            j++;
        }
    }

    // Recursively sort the left and right halves
    mergeSort(leftArray, middle);
    mergeSort(rightArray, length - middle);

    // Merge the sorted halves
    merge(leftArray, rightArray, array, middle, length - middle);
}

void merge(int leftArray[], int rightArray[], int array[], int leftSize, int rightSize)
{
    int i = 0, l = 0, r = 0; // indices

    // Merge the left and right arrays into the main array
    while (l < leftSize && r < rightSize)
    {
        if (leftArray[l] < rightArray[r])
        {
            array[i] = leftArray[l];
            i++;
            l++;
        }
        else
        {
            array[i] = rightArray[r];
            i++;
            r++;
        }
    }

    // Copy any remaining elements from the left array
    while (l < leftSize)
    {
        array[i] = leftArray[l];
        i++;
        l++;
    }

    // Copy any remaining elements from the right array
    while (r < rightSize)
    {
        array[i] = rightArray[r];
        i++;
        r++;
    }
}
