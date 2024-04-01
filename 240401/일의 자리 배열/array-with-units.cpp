#include <iostream>
using namespace std;

int main() {
    int arr[11];
    int a, b;
    cin >> a >> b;

    arr[1] = a, arr[2] =  b;
    for(int i = 3;i < 11;i++){
        arr[i] = arr[i - 1] + arr[i - 2];
        if(arr[i] >= 10) arr[i] %= 10;
    }

    for(int i = 1;i < 11;i++){
        cout << arr[i] << " ";
    }
    return 0;
}