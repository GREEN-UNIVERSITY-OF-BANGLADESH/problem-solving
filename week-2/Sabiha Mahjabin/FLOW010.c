#include <stdio.h>
#include <stdlib.h>


int main()
{
    int i, t, n ;
    scanf("%d", &t) ;
    t = 2*t+1 ;
    for (i= 1; i<=t ; i++){
    char classOfShip;
    //Prompt user to enter the class ID
    
    //Read user input
    scanf("%c", &classOfShip);
    //Check class using if statement
    if(classOfShip == 'b' | classOfShip == 'B')
    {
        printf("BattleShip\n");
    }
    else if(classOfShip == 'c' | classOfShip == 'C')
    {
        printf("Cruiser\n");
    }
    else if(classOfShip == 'd' | classOfShip == 'D')
    {
        printf("Destroyer\n");
    }
    else if(classOfShip == 'f' | classOfShip == 'F')
    {
        printf("Frigate\n");
    }
    }
    
}

