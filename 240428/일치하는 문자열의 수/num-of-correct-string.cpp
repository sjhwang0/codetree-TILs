#include <iostream>
#include <string>
using namespace std;

int main() {
    int n, cnt = 0;
    string str;
    cin >> n >> str;

    string input;
    for(int i = 0;i < n;i++){
        cin >> input;
        if(input == str) cnt++;
    }

    cout << cnt;

    return 0;
}