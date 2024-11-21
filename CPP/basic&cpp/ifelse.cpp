// Find the smallest number between three numbers
#include<iostream>
using namespace std;
int main(){

    int num1,num2,num3;
    cout<<"Enter the number = ";
    cin>>num1>>num2>>num3;
    if(num1<num2){
        if(num1<num3){
            cout<<"Number1 is smallest\n";
        }
        else{
            cout<<"Numbser3 is smallest\n";
        }
    }
    else if(num2<num1){ 
        cout<<"Number2 is smallest\n";
    }
    else{
        cout<<"Number3 is smallest\n";
    }

    return 0;
}
