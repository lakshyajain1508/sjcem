#include<stdio.h>
int main()
{
    int mks[] = {1,2,3,4,5};
    int i;
    int sum = 0;

    for ( i = 0; i <= 4; i++)
    {
        sum  = sum + mks[i];
    }
    printf("%d",sum);
    return 0;
}