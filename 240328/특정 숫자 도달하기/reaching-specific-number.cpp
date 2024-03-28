#include <iostream>
using namespace std;

int main() {
    int a[10], sum = 0, cnt = 0;

    for(int i = 0;i < 10;i++){
        cin >> a[i];
    }

    for(int i = 0;i < 10;i++){
        if(a[i] >= 250) break;
        sum += a[i];
        cnt++;
    }

    double avg = (double)sum / cnt;

    cout << fixed;
    cout.precision(1);
    cout << sum << " " << avg;
    
    return 0;
}