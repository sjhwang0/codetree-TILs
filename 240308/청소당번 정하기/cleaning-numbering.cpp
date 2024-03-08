#include <iostream>
using namespace std;

int main() {
    int n, cnt_c = 0, cnt_w = 0, cnt_t = 0;

    cin >> n;

    for(int i = 1;i <= n;i++){
        if(i % 12 == 0) cnt_t += 1;
        else if(i % 6 == 0 || i % 3 == 0) cnt_w += 1;
        else if(i % 2 == 0) cnt_c += 1;
    }

    cout << cnt_c << " " << cnt_w << " " << cnt_t;

    return 0;
}