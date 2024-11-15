#include <iostream> 
#include <string> 
using namespace std; 
    struct mystruct{ 
        string mystring; 
    };
  
int main() { 
    
    mystruct stu1,stu2;
    stu1.mystring = "Avaneet";
    cout<<stu1.mystring<<endl;
    stu2.mystring = "Mayank";
    cout<<stu2.mystring<<endl;
      
}