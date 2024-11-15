#include<iostream>
#include<string>
using namespace std;

int func(int &a, string &b){
    cout<<"Name -> "<<b<<endl<<"Roll No. -> "<<a;
    return 0;
};
int main(){
    int hn = 10;
    string sn = "Avaneet";
    func(hn,sn);
    return 0;
}