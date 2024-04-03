#include <iostream>
using namespace std;

int main() {
    int n, arr[100], max_value = 0, cnt = 0;
    cin >> n;

    for(int i = 0;i < n;i++)
        cin >> arr[i];

    max_value = arr[0];

    for(int i = 1;i < n;i++){
        if(max_value > arr[i]) max_value = arr[i];
    }
    for(int i = 0;i < n;i++){
        if(max_value == arr[i]) cnt++;
    }

    cout << max_value << " " << cnt;
    return 0;
}