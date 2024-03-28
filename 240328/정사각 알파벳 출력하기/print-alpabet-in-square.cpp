#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    for(int i = 0;i < n * n;i++){
        cout << (char)(i +  65);
        if(i % n == 0) cout << endl;
    }
    return 0;
}