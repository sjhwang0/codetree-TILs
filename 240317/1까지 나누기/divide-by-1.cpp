#include <iostream>

using namespace std;

int main() {
    int n, cnt = 0, temp;

    cin >> n;
    temp = n;

    for(int i = 1;i <= temp;i++){
        n /= i;
        cnt++;
        if(n <= 1) break;
    }

    cout << cnt;

    return 0;
}