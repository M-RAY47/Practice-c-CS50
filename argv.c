#include <stdio.h>
#include <cs50.h>
#include <string.h>
int main(int argc, string argv[])
{
    if (argc == 2)
    {
        for (int i = 0, n = strlen(argv[1]); i < n; i++)
        {
            printf("Hello, %c", argv[1][i]);
        }
    }
    else
    {
        printf("Hello, World");
    }
    printf("\n");
}