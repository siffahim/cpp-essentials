#include <iostream>
using namespace std;

int main(){
    int x;
    cin >> x;

    /*if(x%2 == 0){
        cout << "Even\n";
    }
    else{
        cout << "Odd\n";
    }
    */

    //same it on ternary operator
    x % 2 == 0 ? cout << "Even\n" : cout << "Odd\n";

    return 0;
}