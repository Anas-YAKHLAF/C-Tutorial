#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int numAdd(int *age)
{
    *age = *age + 5;
    return *age;
}
int main()
{
    int age = 20;
    numAdd(&age);
    printf("%d\n", age);
    printf("%d\n", &age);
}