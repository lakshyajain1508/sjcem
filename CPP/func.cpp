#include<iostream>
#include<string>
using namespace std;

void func();
int main(){

    func();
    return 0;
}
void func(){
    
    int a;
    cout<<"Enter the radius of a circle = ";
    cin>>a;
    float area = 3.14*a*a;
    cout<<"Area of circle is "<<area<<endl;
};
