#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <cs50.h>

int main(int argc, string argv[])
{   
    //Checking if the arguments inputted are valid.
    if(argc == 2)
    {   
        //Converting the argument string to an integer.
        int key = atoi(argv[1]);
        
        //Getting the cipher-text.
        //printf("Enter your cipher-text: \n");
        string text = GetString();
        
        //Declaring 'i' and 'c' to be used in the program.
        int i;
        char c;
        
        //looping over each character in the sentence of the user.
        for(i = 0; i < strlen(text); i++)
        {   
            //Checking if current character is an alphabet.
            if(isalpha(text[i]))
            {   
                //Checking if current character is an uppercase letter.
                if(isupper(text[i]))
                {
                    //Implementing the cipher formula for every uppercase letter.
                    c = (text[i] + key - 65) % 26 + 65;
                }
                //Checking if current character is an uppercase letter.
                else if(islower(text[i]))
                {
                    //Checking if current character is a lowercase letter.
                    c = (text[i] + key - 97) % 26 + 97;
                }
                else
                {
                    return 0;
                }
                printf("%c", c);
            }
            else
            {   //Printing out character that is not an alphabet.
                printf("%c", text[i]); 
            };
        
        }
        //Printing all character values on a new line.
        printf("\n");
    }
    else
    {
     printf("Your input is not valid\n");
     return 1;
    };
}
