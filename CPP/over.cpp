#include<iostream>
#include<string>
using namespace std;

int func(int a,int b){
    return a+b;
}
double func(double a,double b){
    return a+b;
}
int main(){
    int fn = func(10,20);
    float sn = func(10.2,10.2);
    cout<<fn<<endl;
    cout<<sn<<endl;
    return 0;
}