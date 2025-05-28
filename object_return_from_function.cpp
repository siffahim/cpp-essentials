#include <bits/stdc++.h>
using namespace std;

class Student{
    public:
        int roll;
        int cls;
        double gpa;

        Student(int roll, int cls, double gpa){
            //(*this).roll = roll;
            this->roll = roll;
            //(*this).cls = cls;
            this->cls = cls;
            (*this).gpa = gpa;
        }
};

Student fahim(){
    Student fahim(50,2,5.00);
    return fahim;
}


int main(){
    Student obj = fahim();
    cout << obj.roll << " " << obj.cls << " " << obj.gpa << endl;

    return 0;
}