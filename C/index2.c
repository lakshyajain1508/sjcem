#include<stdio.h>
int main()
{
    int i = 1;
    int sum = 0;
    while(i<=5)
    {
        sum =sum + i + i;
        i++;
    }
    printf("%d",sum);
    return 0;
}