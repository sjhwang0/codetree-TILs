#include <iostream>
#include <string>

using namespace std;

int main() {
    int n;
    cin >> n;

    string str, total_str = "";

    for(int i = 0;i < n;i++){
        cin >> str;
        total_str += str;
    }

    for(int i = 0;i < total_str.length();i++){
        cout << total_str[i];
        if((i + 1) % 5 == 0) cout << "\n";
    }
    return 0;
}