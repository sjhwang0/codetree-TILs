#include <iostream>
using namespace std;

int main() {
    int n, num;
    cin >> n;
    int arr[10][10];

    for(int i = 0;i < n;i++){
        num = i + 1;
        for(int j = 0;j < n;j++){
            arr[i][j] = num;
            num += n;
        }
    }

    for(int i = 0;i < n;i++){
        for(int j = 0;j < n;j++)
            cout << arr[i][j] << " ";
        cout << "\n";
    }
    return 0;
}