#include <iostream>
using namespace std;

int main() {
    int arr[100];

    for(int i = 0;i < 100;i++){
        cin >> arr[i];
        if(arr[i] == 0) break;
        if(arr[i] % 2 == 0) cout << arr[i] / 2 << " ";
        else if(arr[i] % 2 == 1) cout << arr[i] + 3 << " ";
    }
    return 0;
}