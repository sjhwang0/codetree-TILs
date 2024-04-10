#include <iostream>
using namespace std;

int main() {
    int arr[4][4], sum_val;

    for(int i = 0;i < 4;i++){
        for(int j = 0;j < 4;j++)
            cin >> arr[i][j];
    }

    for(int i = 0;i < 4;i++){
        sum_val = 0;
        for(int j = 0;j < 4;j++)
            sum_val += arr[i][j];
        cout << sum_val << "\n";
    }
    return 0;
}