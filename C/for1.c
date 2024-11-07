#include <stdio.h>
int main()
{
    int i,sum;
    sum = 0;


    for(i = 1;i<=5;i++)
    {
        sum = sum + i;
    }
    printf("%d \n",sum);
    return 0;
}   