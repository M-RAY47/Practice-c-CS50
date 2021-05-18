#include <cs50.h>
#include <stdio.h>

int main(void)
{
    string s = "HI!";
    char *me = "Hello, World";
    printf("%p\n", &s[0]);
    printf("%p", &s[1]);
    printf("%c\n", *(me+8));
}