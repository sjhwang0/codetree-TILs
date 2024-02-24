#include <iostream>
using namespace std;

int main() {
    double f = 30.48, n;
    cin >> n;

    cout << fixed;
    cout.precision(1);
    cout << n * f;
    return 0;
}