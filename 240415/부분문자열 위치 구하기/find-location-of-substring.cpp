#include <iostream>
#include <string>

using namespace std;

int main() {
    string str;
    cin >> str;

    if(str.find("pp") != string::npos) cout << str.find("pp");
    else cout << -1;
    
    return 0;
}