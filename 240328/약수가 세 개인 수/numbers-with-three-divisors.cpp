#include <iostream>
using namespace std;

int main() {
    int start, end, cnt = 0;
    cin >> start >> end;

    for(int i = start;i <= end;i++){
        int divisor_cnt = 0;
        for(int j = 1;j <= i;j++){
            if(i % j == 0) divisor_cnt++; 
        }
        if(divisor_cnt == 3) cnt++;
    }

    cout << cnt;
    return 0;
}