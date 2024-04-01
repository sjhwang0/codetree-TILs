#include <iostream>
using namespace std;

int main() {
    int arr[10], sum_2 = 0, cnt = 0;
    double sum_3 = 0;

    for(int i = 0;i < 10;i++){
        cin >> arr[i];
    }
    for(int i = 0;i < 10;i++){
        if(i % 2 == 1) sum_2 += arr[i];
        if((i + 1) % 3 == 0){
            sum_3 += arr[i];
            cnt++;
        }
    }

    double avg = sum_3 / cnt;

    cout << fixed;
    cout.precision(1);
    cout << sum_2 << " " << avg;
    return 0;
}