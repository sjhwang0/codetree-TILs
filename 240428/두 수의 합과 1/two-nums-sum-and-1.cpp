#include <iostream>
#include <string>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    string str = to_string(a + b);
    int len = str.size();

    int cnt = 0;
    for(int i = 0;i < len;i++){
        if(str[i] == '1') cnt++;
    }

    cout << cnt;
    return 0;
}