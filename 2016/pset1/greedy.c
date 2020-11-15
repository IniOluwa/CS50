#include <stdio.h>
#include <stdlib.h>
#include <cs50.h>
#include <math.h>

float roundup(float x)
{
    return x * 100;
}

float convert(int x)
{
    return (float) x;
}

int conv(float x)
{
    return (int) x;
}
int coins;


int main(void)
{   

    float change;
    do
    {
        printf("O hai!, how much is owed? \n");
        change = GetFloat();
    }   while ((float)change < 0);
    
        change = roundf(change * 100);
        //change = change * 100;
        float quarter = 0.25;
        float dime = 0.10;
        float nickle = 0.05;
        float penny = 0.01;

    
    for (coins = 0; change > 0; coins++)
    {
        if (change >= (float) quarter * 100)
        {
            change = change - 25;
        }
        else if (change >= (float) dime * 100)
        {
            change = change - 10;
        }
        else if (change >= (float) nickle * 100)
        {
            change = change - 5;
        }
        else if (change >= (float) penny * 100)
        {
            change = change - 1;
        }
        else
        {
            break;
        }
    }    
        printf("%d\n", coins);
}
