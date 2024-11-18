#include<iostream>
using namespace std;

class car{
    public:
    void run(){
        cout<<"car is running"<<endl;
    }
};
class bike{
    public:
    void run(){
        cout<<"bike is running"<<endl;
    }
};
class vehicle{
    public:
    void run(){
        cout<<"vehicle is running"<<endl;
    }
};
int main(){
    car c;
    bike b;
    vehicle v;
    c.run();
    b.run();
    v.run();
    return 0;
}