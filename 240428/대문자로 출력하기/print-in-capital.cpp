#include <iostream>
#include <cctype>
#include <string>

using namespace std;

int main() {
    string str;
    cin >> str;

    int len = str.size();

    string ans;

    for(int i = 0;i < len;i++){
        if(isalpha(str[i]) != 0)
            ans += toupper(str[i]);
    }
    cout << ans;

    return 0;
}