#include <iostream>

using namespace std;

int main() {
    int n, k, sum = 0, cnt = 0;
    double avg = 0;

    cin >> n;

    for(int i = 1;i <= n;i++){
        cin >> k;
        sum += k;
        cnt++;
    }

    avg = (double)sum / cnt;

    cout << fixed;
    cout.precision(1);
    
    cout << sum << " " << avg;

    return 0;
}