#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    for(int i = 2;i <= n;i++){
        int divisor_cnt = 0;
        for(int j = 1;j <= i;j++){
            if(i % j == 0) divisor_cnt++;
        }
        if(divisor_cnt == 2) cout << i << " ";
    }

    return 0;
}