#include <stdio.h>
#include <cs50.h>

int main(int argc, string argv[])
{
    if (argc != 2)
    {
        printf("missing command line !\n");
        return 1;
    }
    else
    {

        printf("hello, %s", argv[1]);
    }
}