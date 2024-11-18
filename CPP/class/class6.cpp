#include<iostream>
#include<string>
using namespace std;
class student{
    public:
    void func(string str);

};
void student::func(string str){
    cout<<str;
}
int main()
{
    student s;
    s.func("Lakshya");
    
    return 0;
}