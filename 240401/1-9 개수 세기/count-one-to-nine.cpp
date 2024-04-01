#include <iostream>
using namespace std;

int main() {
    int arr[100], count_arr[10] = {0,}, n;
    cin >> n;

    for(int i = 0;i < n;i++){
        cin >> arr[i];
        count_arr[arr[i]]++;
    }
    for(int i = 1;i < 10;i++){
        cout << count_arr[i] << "\n";
    }
    return 0;
}