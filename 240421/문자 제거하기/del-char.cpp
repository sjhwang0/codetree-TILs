#include <iostream>
#include <string>

using namespace std;

int main() {
    string str;
    cin >> str;

    int len = str.length();

    while(len > 1){
        int i;
        cin >> i;

        if(i > len - 1)
            str.erase(len - 1, 1);
        else
            str.erase(i, 1);
        len--;

        cout << str << "\n";
    }
    return 0;
}