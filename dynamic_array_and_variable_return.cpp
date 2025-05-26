#include <bits/stdc++.h>
using namespace std;

int* fun(){
    int *x = new int[5]{4, 2, 3, 5, 6};
    return x;
}

int main(){
    int* x = fun();

    for (int i = 0; i < 5; i++){
        cout << x[i] << " ";
    }

    return 0;
}