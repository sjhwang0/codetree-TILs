#include <iostream>

using namespace std;

int main() {
    int n, cnt = 0;

    cin >> n;

    while(n < 1000){
        if(n % 2 == 0) n = 3 * n + 1;
        else n = 2 * n + 2;
        cnt++;
    }

    cout << cnt;
    return 0;
}