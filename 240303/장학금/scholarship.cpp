#include <iostream>
using namespace std;

int main() {
    int s_mid, s_fin;

    cin >> s_mid >> s_fin;

    if(s_mid >= 90){
        if(s_fin >= 95) cout << 100000;
        else if(s_fin >= 90) cout << 50000;
        else cout << 0;
    }
    else cout << 0;
    
    return 0;
}