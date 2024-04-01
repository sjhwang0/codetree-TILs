#include <iostream>
using namespace std;

int main() {
    int arr[100], n;
    cin >> n;

    for(int i = 0;i < n;i++){
        cin >> arr[i];
        cout << arr[i] * arr[i] << " ";
    }
    return 0;
}