#include <iostream>
using namespace std;

int main() {
    int arr1[10][10], arr2[10][10];
    int n, m, value;
    cin >> n >> m;

    for(int i = 0;i < n;i++){
        for(int j = 0;j < m;j++)
            cin >> arr1[i][j];
    }
    for(int i = 0;i < n;i++){
        for(int j = 0;j < m;j++)
            cin >> arr2[i][j];
    }

    for(int i = 0;i < n;i++){
        for(int j = 0;j < m;j++){
            value = arr1[i][j] == arr2[i][j] ? 0 : 1;
            cout << value << " ";
        }
        cout << "\n";
    }
    return 0;
}