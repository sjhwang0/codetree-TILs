#include <iostream>

using namespace std;

int main() {
    int n, sum = 0, cnt = 0;
    double avg;

    for(int i = 0;i < 10;i++){
        cin >> n;
        if(n >= 0 && n <= 200){
            sum += n;
            cnt++;
        }
    }

    avg = (double)sum / cnt;

    cout << fixed;
    cout.precision(1);
    
    cout << sum << " " << avg;

    return 0;
}