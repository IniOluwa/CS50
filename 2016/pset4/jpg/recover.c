/**
 * recover.c
 *
 * Computer Science 50
 * Problem Set 4
 *
 * Recovers JPEGs from a forensic image.
 */
 #include <stdio.h>
 #include <stdint.h>
 
 typedef uint8_t BYTE;
 
int main(void)
{
    // opening the file
    FILE* file =  fopen("card.raw", "r");
    if(fopen == NULL)
    {
        printf("This file cannot be opened.\n");
        return 1;
    }
    
    // 512 byte buffer
    BYTE buffer[512];
    
    // temp output file
    FILE* temp = NULL;
    
    // declaring count
    int count = 0;
    
    // reading the file until the end of file
    while(fread(buffer, 512, 1, file) > 0)
    {
        // checking for the beginning of a new jpeg
        if(buffer[0] == 0xff && buffer[1] == 0xd8 && buffer[2] == 0xff && (buffer[3] == 0xe0 || buffer [3] == 0xe1))
        {
            // if that file exists already, close the file
            if(temp != NULL)
            {
                fclose(temp);
            }
            
            // title the files
            char title[8];
            sprintf(title, "%03d.jpg", count);
            
            // create jpeg file with name
            temp = fopen(title, "w");
            
            // increment count
            count++;
            
            // creating jpeg file with output
            fwrite(buffer, sizeof(buffer), 1, temp);
      
        }
        else if (count > 0)
        {
            // put jpeg into temp
            fwrite(buffer, sizeof(buffer), 1, temp);            
        }    
    }
    // close the file
    fclose(file);
    return 0;
}
