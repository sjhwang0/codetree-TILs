#include <iostream>
#include <string>

using namespace std;

int main() {
    char s1, s2;
    cin >> s1 >> s2;

    cout << (int)(s1 + s2) << " ";
    if(s1 > s2) cout << (int)(s1 - s2);
    else cout << (int)(s2 - s1);

    return 0;
}