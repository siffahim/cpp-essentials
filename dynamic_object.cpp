#include <bits/stdc++.h>
using namespace std;

class Student{
    public:
        int roll;
        int cls;
        double gpa;
    
    Student(int roll, int cls, double gpa){
        this->roll = roll;
        this->gpa = cls;
        this->cls = gpa;
    }
};

int main(){
    Student *karim = new Student(2, 5, 6.5);

    // (*karim).cls;
    cout << karim->roll << " " << karim->cls << " " << karim->gpa;
    return 0;
}