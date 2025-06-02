#include <bits/stdc++.h>
using namespace std;

int main(){
    string s = "Hello";
    string s2 = "Gello";

    //s += 'A';
    //s.append(s2);
    // s.push_back('A');
    // s.pop_back();

    //s = s2;
    //s.assign(s2);
    //s.erase(3,1); -> remove from the 3index
    //s.replace(5, 0, "Bangladesh");
    s.insert(5, "Piyas");
    cout << s << endl;

    return 0;
}