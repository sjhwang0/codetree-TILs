#include <iostream>
using namespace std;

int main() {
    int n, arr[100], max_value1 = 0, max_value2 = 0;
    cin >> n;

    for(int i = 0;i < n;i++){
        cin >> arr[i];
    }
    max_value1 = arr[0];
    for(int i = 0;i < n;i++){
        if(arr[i] > max_value1) max_value1 = arr[i];
    }
    max_value2 = arr[0];
    for(int i = 0;i < n;i++){
        if(arr[i] != max_value1 && arr[i] > max_value2) max_value2 = arr[i];
    }

    cout << max_value1 << " " << max_value2;
    return 0;
}