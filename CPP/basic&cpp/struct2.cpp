#include <iostream> 
#include <string> 
using namespace std; 
    struct mystruct{ 
        int num; 
        string mystring; 
    };
  
int main() { 
    
    mystruct stu;
    stu.num = 1;
    stu.mystring = "Avaneet";
    cout<<stu.mystring<<" -> "<<stu.num;
      
}