#include <iostream>
using namespace std;

int main() {
    int a, b;

    cin >> a >> b;

    int m = a <= b ? b : a;

    cout << m;
    
    return 0;
}