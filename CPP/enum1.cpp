#include<iostream> 
#include<string> 
using namespace std; 
  
int main(){ 
    string food = "fries"; 
    string &meal = food; 
    cout<<meal<<endl; 
    return 0;     
 }