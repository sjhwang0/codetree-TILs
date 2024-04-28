#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main() {
    string str;
    cin >> str;

    int len = str.size();

    string ans;
    for(int i = 0;i < len;i++){
        if('A' <= str[i] && str[i] <= 'Z') ans += tolower(str[i]);
        else ans += toupper(str[i]);
    }

    cout << ans;
    return 0;
}