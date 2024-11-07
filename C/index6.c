
#include<stdio.h>
int main()
{
    float number[5];
    for(int i=0; i<4;i++)
    {
        scanf("%f",&number[i]);
    }
    for( int i = 0;i<4;i++){
        printf("%f",number[i]);
    }
    printf("%lu",sizeof(number));
    return 0;
}