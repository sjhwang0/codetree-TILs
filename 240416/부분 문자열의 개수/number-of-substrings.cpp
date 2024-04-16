#include <iostream>
#include <string>

using namespace std;

int main() {
    string str1, str2;
    cin >> str1 >> str2;

    int len = str1.length();
    int cnt = 0;

    for(int i = 0 ;i < len - 1;i++){
        if(str1[i] == str2[0] && str1[i + 1] == str2[1]) cnt++;
    }

    cout << cnt;
    return 0;
}