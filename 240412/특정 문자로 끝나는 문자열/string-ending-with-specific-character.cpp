#include <iostream>
#include <string>

using namespace std;

int main() {
    string arr[10];
    int cnt = 0;

    for(int i = 0;i < 10;i++){
        cin >> arr[i];
    }
    char alpa;
    cin >> alpa;
    for(int i = 0;i < 10;i++){
        int len = arr[i].length();
        if(arr[i][len-1] == alpa){
            cout << arr[i] << "\n";
            cnt++;
        }
    }
    if(cnt == 0) cout << "None";
    return 0;
}