/**
 * helpers.c
 *
 * Computer Science 50
 * Problem Set 3
 *
 * Helper functions for Problem Set 3.
 */
     
#include <cs50.h>

#include "helpers.h"

/**
 * Returns true if value is in array of n values, else false.
 */
bool search(int value, int values[], int n)
{
    // TODO: implement a searching algorithm
/*   int position;*/
/*    for(position = 0; position < n; position++)*/
/*    {*/
/*        if(value == values[position])*/
/*        {*/
/*            return true;*/
/*        }*/
/*    }*/

    int bottom = 0;
    int top = n;
    int middle;
    bool found = false;
    
    if(n < 0)
    {
        return false;
    }
    else
    {
        while(bottom <= top)
        {
            middle = (top + bottom) / 2;

            if(values[middle] == value)
            {
	            found = true;
	            break;
            }
            else if(values[middle] < value)
            {
	            bottom = middle + 1;
            }
            else if(values[middle] > value)
            {
	            top = middle - 1;
            }
        }
        return found;
    }
    
    //return false;
}

/**
 * Sorts array of n values.
 */
void sort(int values[], int n)
{
    // TODO: implement an O(n^2) sorting algorithm    
        
       for (int i = 0; i < n; i++)
       {
            int pointer = i;
            
            for(int j = i + 1; j < n; j++)
            {
                if(values[pointer] > values[j])
                {
                    int temp = values[pointer];
                    values[pointer] = values[j];
                    values[j] = temp;
                }           
            }
            
           
       }
    
    return;
}
