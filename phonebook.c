#include <cs50.h>
#include <stdio.h>
#include <string.h>
typedef struct
{
    string name;
    string number;
} person;
typedef struct
{
    string name;
    string number;
} animal;
int main(void)
{
    int size = get_int("size of people : ");
    person people[size];
    for (int i = 0; i < size; i++)
    {
        people[i].name = get_string("Name of the person %i : ", i + 1);
        people[i].number = get_string("Number of the person %i : ", i + 1);
    }
    string search = get_string("Who are you searching for ?");

    for (int j = 0; j < size; j++)
    {
        if (strcmp(people[j].name, search) == 0)
        {
            printf("the phone number of %s is : %s\n", people[j].name, people[j].number);
            return 0;
        }
    }
    printf("%s Not found\n", search);
    return 1;
}