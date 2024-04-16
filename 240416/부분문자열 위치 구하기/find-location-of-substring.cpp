#include <iostream>
#include <string>

using namespace std;

int main() {
    string str1, str2;
    cin >> str1 >> str2;

    if(str1.find(str2) == string::npos) cout << -1;
    else cout << str1.find(str2);
    return 0;
}