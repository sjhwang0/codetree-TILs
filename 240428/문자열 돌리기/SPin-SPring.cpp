#include <iostream>
#include <string>

using namespace std;

int main() {
    string str;
    cin >> str;

    int len = str.length();

    for(int i = 0;i <= len;i++){
        cout << str << "\n";
        str = str.substr(len - 1, 1) + str.substr(0, len - 1);
    }
    return 0;
}