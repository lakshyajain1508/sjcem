#include<stdio.h>
int main()
{
    float number[5];
    scanf("%f",&number[0]);
    scanf("%f",&number[1]);
    scanf("%f",&number[2]);
    scanf("%f",&number[3]);
    scanf("%f",&number[4]);
    printf("%lu",sizeof(number));
    return 0;
}