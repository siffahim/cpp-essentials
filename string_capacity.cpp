#include <bits/stdc++.h>
using namespace std;

int main(){
    string s = "Hello World";
    // s.resize(3, 'x')-> resize the function;
    //  s.size()
    // s.capacity() //string capacity
    // s.max_size() -> identify how many char will be store on the machine.
    // s.clear();
    // s.empty() -> checking string is empty or not empty.if empty return value 1 not 0;

    s.clear();
    if(s.empty() == 0){
        cout << "String is not empty" << endl;
    }
    else{
        cout << "String empty" << endl;
    }

    return 0;
}