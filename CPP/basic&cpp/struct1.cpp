
#include <iostream> 
#include <string> 
using namespace std; 
int main() { 
    struct { 
        int num; 
        string mystring; 
    }mystruct1,mystruct2,mystruct3; 

    mystruct1.mystring = "Avaneet";
    mystruct1.num = 1;
    cout<<mystruct1.mystring<<" -> "<<mystruct1.num<<endl;
    mystruct2.mystring = "Mayank";
    mystruct2.num = 2;
    cout<<mystruct2.mystring<<" -> "<<mystruct2.num<<endl;
    mystruct3.mystring = "Rugwed";
    mystruct3.num = 3;
    cout<<mystruct3.mystring<<" -> "<<mystruct3.num<<endl;

    return 0;        
  
      
}