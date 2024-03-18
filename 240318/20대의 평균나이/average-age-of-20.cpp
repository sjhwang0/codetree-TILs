#include <iostream>

using namespace std;

int main() {
    int n, cnt = 0;
    double avg = 0;

    while(true){
        cin >> n;

        if(n / 10 != 2) break;
        avg += n;
        cnt++;
    }

    cout << fixed;
    cout.precision(2);
    cout << avg / cnt;
    return 0;
}