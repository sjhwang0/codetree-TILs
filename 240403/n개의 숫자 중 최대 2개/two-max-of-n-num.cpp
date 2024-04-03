#include <iostream>
using namespace std;

int main() {
    int n, arr[100], max_value = 0, temp;
    cin >> n;

    for(int i = 0;i < n;i++)
        cin >> arr[i];

    for(int i = 0;i < n;i++){
        for(int j = 0;j < n - 1 - i;j++){
            if(arr[j] < arr[j + 1]){
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    cout << arr[0] << " " << arr[1];
    return 0;
}