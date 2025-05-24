#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int a, b;
    cin >> a >> b;

    //check min number by manually
    /*if(a < b){
        cout << a << endl;
    }
    else{
        cout << b << endl;
    }*/

    cout << min(a, b) << endl;
    cout << max(a, b) << endl;

    //multiple items check
    cout << min({4, 8, 9, 11}) << endl;
    cout << max({20, 3, 6, 7}) << endl;

    

    //swap variable
    // int temp = a;
    // a = b;
    // b = temp;
    swap(a, b);
    cout << "a: " << a << endl << "b: " << b;

    return 0;
}