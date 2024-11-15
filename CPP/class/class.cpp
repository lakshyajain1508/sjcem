#include<iostream>
#include<string>
using namespace std;

class B{
    public:
    int mynum;
    string mystr;
};
int main(){
    B b;
    b.mynum = 10;
    b.mystr = "Avaneet";
    cout<<b.mystr<<" ->  "<<b.mynum;
}