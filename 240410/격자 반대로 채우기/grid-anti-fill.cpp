#include <iostream>
using namespace std;

int n;
int arr[10][10] = {};
int count = 1;

int main() {
    cin >> n;

    for(int i = n - 1;i >= 0;i--){
        if((n - i) % 2 == 1){
            for(int j = n - 1;j >= 0;j--){
                arr[j][i] = count;
                count++;
            }
        }
        else{
            for(int j = 0;j < n;j++){
                arr[j][i] = count;
                count++;
            }
        }
    }

    for(int i = 0;i < n;i++){
        for(int j = 0;j < n;j++)
            cout << arr[i][j] << " ";
        cout << "\n";
    }
    return 0;
}