#include <iostream>
#include <string>

using namespace std;

int main() {
    string str;
    cin >> str;

    int len = str.length();

    str = str.erase(1, 1);
    str = str.erase(len-3, 1);

    cout << str;

    return 0;
}