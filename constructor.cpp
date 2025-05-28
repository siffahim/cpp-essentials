#include <bits/stdc++.h>
using namespace std;

class Student{
    public:
        int roll;
        int cls;
        double gpa;

        Student(int r, int c, double g){
            roll = r;
            cls = c;
            gpa = g;
        }
};

int main(){
    Student fahim(45,2,5.00);

    cout << fahim.roll << " " << fahim.cls << " " << fahim.gpa << endl;

    return 0;
}