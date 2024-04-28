#include <iostream>
#include <string>
using namespace std;

int main() {
    string s1, s2;
    cin >> s1 >> s2;

    int sum = 0;
    sum = stoi(s1 + s2) + stoi(s2 + s1);
    cout << sum;
    return 0;
}