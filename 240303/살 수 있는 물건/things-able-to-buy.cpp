#include <iostream>
using namespace std;

int main() {
    int n;
    
    cin >> n;

    if(n >= 3000) cout << "book";
    else if(1000 <= n < 3000) cout << "mask";
    else cout << "no";

    return 0;
}