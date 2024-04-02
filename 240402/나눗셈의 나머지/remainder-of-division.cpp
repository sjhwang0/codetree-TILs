#include <iostream>
using namespace std;

int main() {
    int a, b, count_arr[9] = {}, sum = 0;
    cin >> a >> b;

    for(int i = 0;i < 11;i++){
        if(a <= 1) break;
        count_arr[a % b]++;
        a /= b;
    }
    for(int i = 0;i < 9;i++){
        sum += count_arr[i] * count_arr[i];
    }
    cout << sum;
    return 0;
}