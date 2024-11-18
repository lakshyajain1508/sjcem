#include<iostream>
using namespace std;

class employee {
    private:
    int salary;
    public:
    void setSalary(int s) {
        salary = s;
    }
    int getSalary() {
        return salary;
    }

};
int main() {
    employee e;
    e.setSalary(50000);
    cout << e.getSalary() << endl;
}