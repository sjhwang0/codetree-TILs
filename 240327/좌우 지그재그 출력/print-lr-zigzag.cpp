#include <iostream>
using namespace std;

int main() {
    int n, cnt = 1;
    cin >> n;

    for(int i = 0;i < n;i++){
        if(i % 2 == 0){
            for(int j = 0;j < n;j++){
                cout << cnt << " ";
                cnt++;
            }
        }
        else{
            for(int j = n-1;j >= -n;j -= 2){
                cout << cnt + j << " ";
                cnt++;
            }
        }
        cout << endl;
    }
    return 0;
}