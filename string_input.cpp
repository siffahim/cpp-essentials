#include <bits/stdc++.h>
using namespace std;
//string input > getline, ignore
int main(){
    char s[100]; //another type was string
    int x;
    cin >> x;
    cout << x << endl;
    cin.ignore();

    //fgets(s, 100, stdin);
    cin.getline(s, 100);
    cout << s;

    return 0;
}