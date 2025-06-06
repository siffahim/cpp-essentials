#include <bits/stdc++.h>
using namespace std;

class Student{
    public:
        string name;
        int roll;
        int math;
        int english;
        Student(string name, int roll, int math, int english){
            this->name = name;
            this->roll = roll;
            this->math = math;
            this->english = english;
        }

        void hello(){
            cout << "Hello from " << name << endl;
        }

        void total(){
            cout << "Total mark of " << name << " = " << math + english;
        }
};

int main(){
    Student fahim("Fahim Ahmed", 45, 85, 15);
    fahim.total();

    return 0;
}