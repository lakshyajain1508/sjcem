
 #include<iostream> 
 #include<string> 
 using namespace std; 
 int main() 
 { 
     int i,j; 
     string name[2][3]={{"nisha","riya","ragini"},{"ritu","kajal","school"}}; 
     for( i=0;i<3;i++) 
     { 
         for(j=0;j<3;j++) 
         { 
             cout<<name[i][j]<<endl; 
         } 
     } 
     return 0; 
 }