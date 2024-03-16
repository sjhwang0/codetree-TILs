#include <iostream>

using namespace std;

int main() {
    int n, cnt = 1;

    cin >> n;

    for(int i = 0;i <= 100;i++){
        if(cnt + i >= n) break;
        cnt += i;
    }

    cout << cnt;
    return 0;
}