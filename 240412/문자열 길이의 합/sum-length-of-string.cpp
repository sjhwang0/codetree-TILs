#include <iostream>
#include <string>

using namespace std;

int main() {
    int n, sum = 0, a_cnt = 0;
    string str[10];

    cin >> n;

    for(int i = 0;i < n;i++){
        cin >> str[i];
    }
    for(int i = 0;i < n;i++){
        sum += str[i].length();
        if(str[i][0] == 'a') a_cnt++;
    }

    cout << sum << " " << a_cnt;
    return 0;
}