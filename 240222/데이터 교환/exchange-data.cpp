#include <iostream>
using namespace std;

int main() {
    int a = 5, b = 6, c = 7, temp;
    
    temp = a;
    a = b;
    b = temp;

    temp = a;
    a = c;
    c = temp;

    cout << a << endl << b << endl << c;

    return 0;
}