#include <iostream>
using namespace std;

int main() {
    int n = 13;
    double r = 0.165;

    cout << fixed;

    cout.precision(6);
    cout << n << " * " << r << " = " << n * r;
    return 0;
}