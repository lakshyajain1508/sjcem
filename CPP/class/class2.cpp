#include <iostream> 
 #include <string> 
 using namespace std; 
  
 class Car { 
   public: 
     string brand; 
     string model; 
     int year; 
 }; 
  
 int main() { 
   Car carObj1; 
   carObj1.brand = "BMW"; 
   carObj1.model = "X5"; 
   carObj1.year = 1999; 
  
   cout << carObj1.brand << " " << carObj1.model << " " << carObj1.year << "\n"; 
   return 0; 
 }