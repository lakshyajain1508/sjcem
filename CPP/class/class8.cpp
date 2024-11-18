
#include<iostream>
using namespace std;

class myclass{
    public:
    void function(){
        cout<<"Hello, World!"<<endl;
    }
};
class otherclass{
    public:
    void otherfunction(){
        cout<<"Hello, Universe!"<<endl;
    }
};
class myotherclass : public myclass, public otherclass{

};
int main(){
    myotherclass obj;
    obj.otherfunction();
    obj.function();
    return 0;
    }