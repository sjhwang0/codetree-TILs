#include <iostream>
#include <string>

using namespace std;

int main() {
    int cnt = 0;
    string arr[5] = {"apple", "banana", "grape", "blueberry", "orange"};

    char c;
    cin >> c;

    for(int i = 0;i < 5;i++){
        if(arr[i][2] == c || arr[i][3] == c){
            cout << arr[i] << "\n";
            cnt++;
        }
    }
    cout << cnt;
    return 0;
}