#include<stdio.h>
int main()
{
    int arr[2][3]={{14,56,78},{30,67,88}};
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("%d\n",arr[i][j]);
        }
   }
   return 0; 
}