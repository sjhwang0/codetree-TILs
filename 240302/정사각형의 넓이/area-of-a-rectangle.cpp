#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int s = n * n;

    cout << s << endl;
    
    if(n < 5) cout << "tiny";
    
    return 0;
}