#include<stdio.h>
int main()
{
    int number[4];

    scanf("%d",&number[0]);
    scanf("%d",&number[1]);
    scanf("%d",&number[2]);
    scanf("%d",&number[3]);

    int i;
    for(i=0;i<=3;i++)
    {
        printf("Numbers are :- ");
        printf("%d \n",number[i]);
    }
    return 0;
}