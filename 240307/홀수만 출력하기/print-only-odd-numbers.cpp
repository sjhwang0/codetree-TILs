#include <iostream>
using namespace std;

int main() {
    int n;

    cin >> n;

    for(int i = 1;i <= n;i++){
        int temp;
        cin >> temp;
        if(temp % 2 == 1 && temp % 3 == 0) cout << temp << endl;
    }
    return 0;
}