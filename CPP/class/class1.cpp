 #include<iostream> 
 #include<string> 
 using namespace std; 
 class myclass{ 
     public: 
     void mymethod(); 
     
     
 }; 
 void myclass::mymethod(){ 
     cout<<"hello world"<<endl; 
 } 
 int main(){ 
     myclass myobj; 
     myobj.mymethod(); 
     return 0; 
 }