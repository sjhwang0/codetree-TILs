#include <iostream>
using namespace std;

int main() {
    int arr[100];
    int max_value = 0, min_value = 0;

    for(int i = 0;i < 100;i++){
        cin >> arr[i];
        if(i == 0){
            max_value = arr[i];
            min_value = arr[i];
        }
        if(arr[i] == 999 || arr[i] == -999){
            cout << max_value << " " << min_value;
            break;
        }
        if(arr[i] > max_value) max_value = arr[i];
        if(arr[i] < min_value) min_value = arr[i];
    }
    return 0;
}