#include<iostream>
#include<string>
using namespace std;
void func(string s = "ramesh") //parameter
{
    
    cout<<s;
};
int main(){

    func("maya \n");
    func("suresh");//arguments
    return 0;
}
