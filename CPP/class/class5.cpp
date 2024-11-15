#include<iostream>
#include<string>
using namespace std;
class speed{
    public:
    void func(int num);
};
void speed::func(int num){
    cout<<num;
}
int main(){
    speed s;
    s.func(100);
}