#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    for(int i = 1;i <= n;i++){
        for(int j = i;j <= i * i;j += i) cout << j << " ";
        cout << endl;
    }
    return 0;
}