#include<stdio.h>
int main()
{
    int number[4];

    number[0] = 25;
    number[1] = 50;
    number[2] = 75;
    number[3] = 100;

    int i;
    for(i=0;i<=3;i++)
    {
        printf("%d \n",number[i]);
    }
    return 0;
}