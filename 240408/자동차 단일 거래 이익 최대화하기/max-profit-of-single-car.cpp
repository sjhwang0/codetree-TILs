#include <iostream>
using namespace std;

int main() {
    int n, arr[1000], inter = 0, result = 0;
    cin >> n;

    for(int i = 0;i < n;i++)
        cin >> arr[i];

    for(int i = 0;i < n;i++){
        for(int j = i + 1;j < n;j++){
            if(arr[i] < arr[j]) inter = arr[j] - arr[i];
            if(inter > result) result = inter;
        }
    }

    cout << result;
    return 0;
}