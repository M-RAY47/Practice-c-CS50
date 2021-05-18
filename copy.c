#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int main(void)
{
    char *s = get_string("s: ");
    char *r = malloc(strlen(s) + 1);
    strcpy(r, s);

    char *t = malloc(strlen(s) + 1);
    if (t == NULL)
    {
        return 1;
    }

    for (int i = 0, n =strlen(s); i <= n; i++)
    {
        t[i] =s[i];
    }
    // in case the user put nothing as string
    if (strlen(t) > 0)
    {
        t[0] = toupper(t[0]);
    }

    printf("s: %s\n", s);
    printf("t: %s\n", t);
    printf("r: %s\n", r);
    free(t);
}