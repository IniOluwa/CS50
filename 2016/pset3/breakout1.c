/**
 * Initializes window with a grid of bricks.
 */
void initBricks(GWindow window)
{
    // TODO
    
    GRect bricks;
    int x;
    int y;

    for(int i = 0; i < ROWS; i++)
    {
        x = 2;
        y = 4;
        
        int j = 0;
        while(j < COLS)
        {
            bricks = newGRect(x, y, 30, 10);
            j++;
            x = x + 2;
            y = y + 2;
        }
    }
    add(window, bricks);
    
}


for(int i = 0; i < ROWS; i++)
    {
        int x = 4;
        int y = 6;
        GRect bricks = newGRect(x, y, 30, 10);
        
        for(int j = 0; j < COLS; j++)
        {
            setFilled(bricks, true);
            setColor(bricks, "BLUE");
        };
        x = x + 1;
        y = y + 1;
        add(window, bricks);
    }
    
    
    
    
    
    
    
    
    
    
    
    
    
    for(int i = 0; i < ROWS; i++)
    {
        int x = 0;
        int y = 0;
        GRect bricks;
        
        for(int j = 0; j < COLS; j++)
        {   
            
            y = y + 4;
            
            if(x >= 0)
            {
                bricks = newGRect(x, y, 30, 10);
            }
            
        }
        x = x + 2;
        add(window, bricks);
    }
    
    
    
    
    for(int i = 0; i < ROWS; i++)
    {
        int x = 8;
        int y = 6;
        
        x = x + x;
        //y = y + y;
        
        GRect bricks = newGRect(x, y, 40, 15);
        for(int j = 0; j < COLS; j++)
        {   
            y = y + y;
            setFilled(bricks, true);
            add(window, bricks);
        }
        //add(window, bricks)
    }
    
    
    
     for(int i = 0; i < ROWS; i++)
    {
        int x = 0;
        int y = 0;
        GRect bricks;
        
        for(int j = 0; j < COLS; j++)
        {   
            x = x + 2;
            y = y + 4;
            bricks = newGRect(x, y, 30, 10);
            
        }
        add(window, bricks);
    }
    
    
    
    
    
    
    
    
for(int i = 0; i < COLS; i++)
{   
    int x = -38;
    int y;
    
    x = x + 40;
    y = 40;
    
    GRect bricks = newGRect(x, y, 50, 15);
    add(window, bricks);
    
    for(int j = 0; j < ROWS - 1; j++)
    {
        y = y + 12;
        GRect bricks = newGRect(x, y, 50, 15);
        add(window, bricks);
        
    }
}








for(int i = 0; i < ROWS; i++)
{   
    int x = -38;
    int y;
    
    x = x + 40;
    y = 40;
    
    GRect bricks = newGRect(x, y, 50, 15);
    add(window, bricks);
    
    for(int j = 0; j < COLS; j++)
    {
        y = y + 12;
        GRect bricks = newGRect(x, y, 50, 15);
        add(window, bricks);
    }
}









if (strcmp(getType(object), "GRect") == 0 && object != paddle && object != label)
{
   removeGWindow(window, object);
}
