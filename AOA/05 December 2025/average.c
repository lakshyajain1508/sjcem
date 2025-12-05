#include <stdio.h>

int main() {
    
    int a,b,c;
    printf("Enter three integer numbers:");
    scanf("%d %d %d",&a,&b,&c);
    int sum = a + b + c;
    int avg = sum/3;
    printf("Average: %d",avg);
    
    return 0;
}
