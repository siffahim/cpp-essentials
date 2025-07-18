#include <bits/stdc++.h>
using namespace std;

int main(){

    string s = "Hello World";

    // for (int i = 0; i < s.size(); i++){
    //     cout << s[i] << endl;
    // }

    //auto
    for (string:: iterator it = s.begin(); it < s.end(); it++){
        cout << *it << endl;
    }

    //string:: iterator instant of this we can use 'auto' keyword

    // cout << *s.begin() << endl;
    // cout << *s.end() << endl;
    return 0;
}