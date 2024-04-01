#include <iostream>
using namespace std;

int main() {
    int n, arr[11], cnt = 0;
    cin >> n;

    for(int i = 1;i <= 10;i++){
        arr[i] = n * i;
    }
    for(int i = 1;i <= 10;i++){
        cout << arr[i] << " ";
        if(arr[i] % 5 == 0) cnt++;
        if(cnt == 2) break;
    }
    return 0;
}