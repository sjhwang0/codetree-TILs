#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    cin >> str;

    int len = str.length();
    int sum = 0;

    for(int i = 0;i < len;i++){
        sum += str[i] - '0';    
    }

    cout << sum;
    
    return 0;
}