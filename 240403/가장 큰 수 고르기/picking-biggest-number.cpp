#include <iostream>
#include <climits>
using namespace std;

int main() {
    int arr[10], max_value = 0;
    
    max_value = INT_MIN;
    for(int i = 0;i < 10;i++){
        cin >> arr[i];
        if(arr[i] > max_value) max_value = arr[i];
    }
    cout << max_value;
    return 0;
}