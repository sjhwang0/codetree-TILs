#include <iostream>
#include <string>
using namespace std;

int main() {
    int s;

    cin >> s;

    int g = s == 100 ? 0 : 1;

    string pf = g == 0 ? "pass" : "failure";

    cout << pf;
    return 0;
}