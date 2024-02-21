#include <iostream>
using namespace std;

int main() {
    double f = 30.48, m = 160934;

    cout << fixed;
    cout.precision(1);

    cout << "9.2ft = " << 9.2 * f << "cm";
    cout << endl;
    cout << "1.3mi = " << 1.3 * m << "cm";

    return 0;
}