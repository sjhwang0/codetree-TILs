#include <iostream>
using namespace std;

int main() {
    int n, cnt_3 = 0, cnt_5 = 0;

    for(int i = 0;i < 10;i++){
        cin >> n;
        if(n % 3 == 0) cnt_3 += 1;
        if(n % 5 == 0) cnt_5 += 1;
    }

    cout << cnt_3 << " " << cnt_5;
    
    return 0;
}