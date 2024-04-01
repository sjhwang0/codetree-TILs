#include <iostream>
using namespace std;

int main() {
    int n1, n2, arr[100];
    cin >> n1 >> n2;

    arr[1] = n1, arr[2] = n2;
    for(int i = 3;i <= 100;i++){
        arr[i] = arr[i - 1] + 2 * arr[i - 2];
    }
    for(int i = 1;i <= 10;i++){
        cout << arr[i] << " ";
    }
    return 0;
}