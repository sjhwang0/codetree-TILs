#include <iostream>
using namespace std;

int main() {
    int a[10], sum = 0;

    cout << fixed;
    cout.precision(1);

    for(int i = 0;i < 10;i++){
        cin >> a[i];
        if(a[i] >= 250){
            cout << sum << " " << (double)sum / i;
            break;
        }
        sum += a[i];
    }
    return 0;
}