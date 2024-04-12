#include <iostream>
#include <string>

using namespace std;

int main() {
    int count = 0;
    string str;
    char c;
    
    getline(cin, str);
    cin >> c;

    int len = str.length();

    for(int i = 0;i < len;i++){
        if(str[i] == c) count++;
    }

    cout << count;
    return 0;
}