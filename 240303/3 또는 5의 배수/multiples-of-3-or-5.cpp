#include <iostream>
using namespace std;

int main() {
    int a;
    cin >> a;

    if(a % 3 == 0) cout << "YES";
    else cout << "NO";

    cout << endl;

    if(a % 5 == 0) cout << "YES";
    else cout << "NO";

    return 0;
}