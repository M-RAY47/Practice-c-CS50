#include <cs50.h>
#include <stdio.h>
#include <string.h>

//how many contacts should have
const int TOTAL = 4;
typedef struct
{
    string name;
    string number;
}
person;

int main(void)
{
    person people[TOTAL];

    for (int i = 0; i < TOTAL; i++)
        {
            people[i].name = get_string("Enter name: ");
            people[i].number = get_string("Enter number: ");
        }
    for (int i = 0; i < 2; i++)
    {
        if (strcmp(people[i].name, "MRAY") == 0)
        {
            printf("contact: %s\n",people[i].name);
            printf("phone: %s\n",people[i].number);
            return 0;
        }
    }
}
