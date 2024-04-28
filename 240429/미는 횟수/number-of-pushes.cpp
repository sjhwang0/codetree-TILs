#include <iostream>
#include <string>
using namespace std;

int main() {
    string s1, s2;
    cin >> s1 >> s2;
    int cnt = 0, len = s1.length();
    
    for(int i = 0;i < len;i++){
        if(s1 == s2) break;
        s1 = s1.substr(len-1, 1) + s1.substr(0, len-1);
        cnt++;
    }
    
    if(cnt == len) cnt = -1; 

    cout << cnt;
    return 0;
}