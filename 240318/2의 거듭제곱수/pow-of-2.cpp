#include <iostream>

using namespace std;

int main() {
    int n, cnt = 0;

    cin >> n;

    while(n != 1){
        cnt++;
        n /= 2;
    }

    cout << cnt;
    return 0;
}