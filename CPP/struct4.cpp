#include <iostream> 
#include <string> 
using namespace std; 
    struct mystruct{ 
        int num;
        string st; 
    };
  
int main() { 
    
    mystruct mystring1,mystring2,mystring3;

    mystring1.num = 20;
    mystring1.st = "Mayank";
    cout<<mystring1.st<<" -> "<<mystring1.num<<endl;

    mystring2.num = 21;
    mystring2.st = "Rugwed";
    cout<<mystring2.st<<" -> "<<mystring2.num<<endl;

    mystring3.num = 22;
    mystring3.st = "Pratik";
    cout<<mystring3.st<<" -> "<<mystring3.num<<endl;

    return 0;
}