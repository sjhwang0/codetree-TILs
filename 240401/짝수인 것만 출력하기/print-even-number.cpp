#include <iostream>
using namespace std;

int main() {
    int arr[100], arr2[100], n;
    cin >> n;

    for(int i = 0;i < n;i++){
        cin >> arr[i];
        if(arr[i] % 2 == 0) cout << arr[i] << " ";
    }
    return 0;
}