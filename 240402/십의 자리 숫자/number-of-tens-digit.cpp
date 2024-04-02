#include <iostream>
using namespace std;

int main() {
    int arr[100], count_arr[10] = {};
    
    for(int i = 0;i < 100;i++){
        cin >> arr[i];
        if(arr[i] == 0) break;
        if(arr[i] >= 10) count_arr[arr[i] / 10]++;
    }
    for(int i = 1;i <= 9;i++){
        cout << i << " - " << count_arr[i] << "\n";
    }

    return 0;
}