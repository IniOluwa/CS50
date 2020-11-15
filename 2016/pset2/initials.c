#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <cs50.h>

int main(void)
{
    //Asking for users names.
    //printf("What are your names? ");
    string name = GetString();
    int i;
    //Setting up interation over every character in the name string.
    for(i = 0; i < strlen(name); i++)
    {
        //Printing the very first initial in uppercase.
        printf("%c", toupper(name[0]));
        //Printing all other initials in uppercase.
        while(name[i] != '\0')
        {
            if(name[i] == ' ')
            {
                printf("%c", toupper(name[i + 1]));
            }
            i++;
        }
    }
    //Printing a new line.
    printf("\n");
}
