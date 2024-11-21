#include<iostream>
#include<string>
using namespace std;

class A{
    public:
    int var = 20;
    int var2 = 30;
    float f = 30.6;
    void func(string s){
        cout<<s<<endl;
    }
};
class B : public A{
    public:
    int var3 = 40;
    int var4 = 90;
    void func1(string l, string m){
        cout<<l<<endl;
        cout<<m<<endl;
    }
};
int main(){
    B bs;
    cout<<bs.var<<endl;
    cout<<bs.var2<<endl;
    cout<<bs.f<<endl;
    cout<<bs.var3<<endl;
    cout<<bs.var4<<endl;
    bs.func("Lakshya");
    bs.func1("Avaneet","Mayank");
    return 0;
}