#include <iostream>
using namespace std;

int main() {
    int n, cnt = 0;

    cin >> n;

    for(int i = 1;i <= n;i++){
        if(i % 4 != 0) cnt += 1;
        if(i % 100 == 0 && i % 400 != 0) cnt += 1;
    }

    cout << n - cnt;

    return 0;
}