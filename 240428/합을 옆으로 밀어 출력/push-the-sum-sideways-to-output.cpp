#include <iostream>
#include <string>
using namespace std;

int main() {
    int n, num, sum = 0;
    cin >> n;

    for(int i = 0;i < n;i++){
        cin >> num;
        sum += num;
    }

    string str = to_string(sum);
    int len = str.length();

    str = str.substr(1, len-1) + str.substr(0, 1);
    cout << str;

    return 0;
}