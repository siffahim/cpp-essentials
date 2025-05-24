#include <iostream>

int main(){
    int x;
    char c;
    double f;
    std::cin >> x >> c >> f;
    std::cout << x << std::endl << c << std::endl << f << std::endl;

    // type casting in c
    /*
        int x = a;
        printf("%c", x);
    */

    //in c++
    int a = 65;
    char ascii = a;
    std::cout << ascii << "\n";

    //way to two
    char y = 'A';
    std::cout << (int)y << std::endl;

    int d = 97;
    std::cout << (char)d;

    return 0;
}