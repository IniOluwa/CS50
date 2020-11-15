#include <stdio.h>
#include <cs50.h>


int main(void)
{   //These tells the variables to look into the loop for their values.
    int height;
    int n;
    
    //This loop checks if the integer is of a correct value, if not, it re-prompts.
    do
    { 
        printf("Input an integer > 0 and < 24: ");  
        height = GetInt();
        n = height + 1;
    }
    while (height > 23 || height < 0);
    
    //This is the initialization of the pyramid.
    if (height > -1 && height < 24)
    {   
        //This loop prints every set of pyramid blocks and spaces on a new line.
        for (int i = 0; i < height; i++)
        {   
            //This loop prints the spaces.
            for (int spaces = 0; spaces < (height - i - 1); spaces++)
                {
                    printf(" ");
                } 
           
            //This loop prints the hashes.
            for (int hashes = 0; hashes < ((n + i) - height + 1); hashes++)
                 {
                    printf("#");
                 };
                 
            printf("\n");
            
        }
    }
    
    else
    {
        printf("Pick again.\n");
    };
    
}
