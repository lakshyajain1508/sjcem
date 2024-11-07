#include<stdio.h>
int main()
{
    int dice = 1;
    while(dice<=6)
    {
        
        if(dice<6)
        {
            printf("NO YATZY \n");
        }
        else
        {
            printf("YATZY!\n");
        }
        dice = dice + 1;
    }
    return 0;
}