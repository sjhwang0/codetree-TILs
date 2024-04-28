#include <iostream>
#include <string>
using namespace std;

int main() {
    string s1, s2;
    cin >> s1 >> s2;
    int cnt = 0, len = s1.length();
    
    while(1){
        if(s1 == s2) break;
        s1 = s1.substr(1, len-1) + s1.substr(0, 1);
        cnt++;
    }

    cout << cnt;
    return 0;
}