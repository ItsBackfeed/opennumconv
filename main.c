#include <stdio.h>



/* 
    This functions contains a very simple algorithm that
    calculates how many digit the base number has. The 
    value it returns is needed to create an Array later on 
    to save the digits of the converted number.
*/
int getDigitCount(int startNum)
{
    int digitCount = 0;

    while(startNum != 0)
    {
        numLength++;
        startNum /= 10;
    }

    return digitCount;
}




int calcNewNum(int startNum, int baseSys, int endSys, int numLength)
{
    int endNum = 0;

    

}

//The main function.
int main() 
{

    int baseSys = 0;
    int startNum = 0;
    int endSys = 0;
    int endNum = 0;

    printf("\nONSC version alpha 0.1\n");

    /* 
        This variable manages the input the user gives in the main loop, and
        how the loop reacts to it.
    */ 
    int menuInput = 0;

    /*  
        The main loop.
        Everything related to input and output happens in here. 
        This loop is basically the "Brain" of ONSC. 
    */
    while(menuInput != 2)
    {
        printf("Press 1 to convert a number. \nPress 2 to end ONSC. \n");

        scanf("%d", &dessicion);

        if (dessicion == 1)
        {
            
        }

        else if (dessicion == 2)
        {
            printf("\nThanks for using ONSC.")
            break;
        }

        else 
        {
            printf("\n%d is not a valid option!", dessicion);
        }

        dessicion = 0;
    }
    
}