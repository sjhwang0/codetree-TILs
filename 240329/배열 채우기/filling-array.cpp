#include <iostream>
using namespace std;

int main() {
    int n, arr[10], cnt = 0;

    for(int i = 0;i < 10;i++){
        cin >> n;
        if(n == 0) break;
        if(i != 0) cnt++;
        arr[i] = n;
    }
    for(int i = cnt;i >= 0;i--){
        cout << arr[i] << " ";
    }
    return 0;
}