#include <iostream>
using namespace std;

int main() {
    int n, arr[1000], indices[1000], cnt = 0;
    cin >> n;

    for(int i = 0;i < n;i++) cin >> arr[i];

    indices[cnt++] = 0;

    for(int i = 1;i < n;i++){
        int last_idx = indices[cnt - 1];
        if(arr[i] > arr[last_idx]) indices[cnt++] = i;
    }

    for(int i = cnt - 1;i >= 0;i--){
        int index = indices[i];
        cout << index + 1 << " ";
    }
    
    return 0;
}