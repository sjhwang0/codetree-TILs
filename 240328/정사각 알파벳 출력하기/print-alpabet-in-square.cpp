#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    for(int i = 1;i <= n * n;i++){
        cout << (char)(i +  64);
        if(i % n == 0) cout << endl;
    }
    return 0;
}