#include <iostream>
using namespace std;

int main() {
    int arr1[100], arr2[100], n1, n2;
    cin >> n1 >> n2;

    for(int i = 0;i < n1;i++)
        cin >> arr1[i];
    for(int i = 0;i < n2;i++)
        cin >> arr2[i];

    bool satisfied = 1;
    for(int i = 0;i <= n1 - n2;i++){
        if(arr1[i] == arr2[0]) {
            for(int j = i + 1, k = 1; k != n2; ++j, ++k) {
                if(arr1[j] != arr2[k]) satisfied = 0;
            }
        }
    }
    if(satisfied == 1) cout << "Yes";
    else cout << "No";
    
    return 0;
}