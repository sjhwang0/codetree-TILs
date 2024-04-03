#include <iostream>
using namespace std;

int main() {
    int n, arr[1000], count_value[1001], max_value = 0;
    cin >> n;

    for(int i = 0;i < n;i++){
        cin >> arr[i];
        count_value[arr[i]]++;
    }
    for(int i = 1;i < n + 1;i++){
        if(count_value[i] == 1 && i > max_value) max_value = i; 
    }

    if(max_value == 0) cout << -1;
    else cout << max_value;
    return 0;
}