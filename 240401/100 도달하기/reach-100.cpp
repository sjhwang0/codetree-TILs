#include <iostream>
using namespace std;

int main() {
    int n, arr[20];
    cin >> n;

    arr[1] = 1, arr[2] = n; 
    for(int i = 3;i < 20;i++){
       arr[i] = arr[i - 1] + arr[i - 2];
    }
    for(int i = 1;i <= 20;i++){
        cout << arr[i] << " ";
        if(arr[i] > 100) break;
    }
    return 0;
}