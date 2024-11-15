#include<iostream>
#include<string>
using namespace std;

string func(string s){
    return s;
}
int func(int a){
    return a;
}
int main(){
    string fn = func("Avaneet");
    int sn = func(10);
    cout<<fn<<endl;
    cout<<sn<<endl;
    return 0;
}