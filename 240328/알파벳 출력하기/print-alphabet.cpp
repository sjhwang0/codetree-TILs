#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    char cnt = 'A';

    for(int i = 0;i < n;i++){
        for(int j = 0;j < i + 1;j++){
            cout << cnt;
            cnt++;
            if(cnt == 91) cnt = 'A';
        }
        cout << endl;
    }
    return 0;
}