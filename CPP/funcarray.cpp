#include<iostream>
using namespace std;
int func(int a[4]){
    for(int i=0;i<4;i++)
    {
        cout<<a[i]<<endl;
    }
    return 0;
}
int main(){
    int a[4] = {20,30,50,40};
    func(a);
    return 0;
}