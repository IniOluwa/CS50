#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <cs50.h>


//Declaring a key function to be added to the cipher-formula.
int keyfunction(char key);

int keyfunction(char key)
{
    if(isupper(key))
    {
        return key - 65;
    }
    else
    {
        return key - 97;
    }
}

int main(int argc, string argv[])
{    
    //Initializing 'i', 'c' and 'j' to be used in the program.
    int i;
    char c = '\0';
    int j;
    
    //Converting the argument string to a string of characters.
    string key = argv[1];

    //Checking if the arguments inputted are valid. 
    if(argc != 2)
    {
        printf("Invalid!!\n");
        return 1;
    }
    
    //looping over each character in the key of the user. 
    for(j = 0; j < strlen(argv[1]); j++)
    {   
        //Checking if all characters are alphabets.
        if(!isalpha(argv[1][j]))
        {
        printf("Every character in the key must be an alphabet!\n");
        return 1;
        };
    }
    
    //Getting text to be ciphered.
    string text = GetString();    
    
        //looping over each character in the text of the user. 
        for (i = 0, j = 0; i < strlen(text); i++)
        {
            //Checking if current character is an alphabet.
            if(isalpha(text[i]))
            {
                //Checking if current character is an uppercase letter.
                if (isupper(text[i]))
                {
                    //Implementing the cipher formula for every uppercase letter.
                    c = (text[i] + keyfunction(key[j]) - 65) % 26 + 65;
                }
                else 
                {
                    //Implementing the cipher formula for every lowercase letter.
                    c = (text[i] + keyfunction(key[j]) - 97) % 26 + 97;
                }
                j = (j + 1) % strlen(key);
                printf("%c", c);
            }
            else
            {
                //Printing out character in text that is not an alphabet.
                printf("%c", text[i]);
            }
        }

    //Printing all deduced characters on a new line.
    printf("\n");
}
