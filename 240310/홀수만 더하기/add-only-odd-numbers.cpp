#include <iostream>

using namespace std;

int main() {
    int n, k, sum = 0;

    cin >> n;

    for(int i = 1;i <= n;i++){
        cin >> k;
        if(k % 2 == 1 && k % 3 == 0) sum += k;
    }

    cout << sum;

    return 0;
}