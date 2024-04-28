#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
    string s1, s2;
    cin >> s1 >> s2;

    int s1_len = s1.size(), s2_len = s2.size();

    string ans1, ans2;
    for(int i = 0;i < s1_len;i++){
        if(isdigit(s1[i]) != 0) ans1 += s1[i];
    }
    for(int i = 0;i < s2_len;i++){
        if(isdigit(s2[i]) != 0) ans2 += s2[i];
    }

    cout << stoi(ans1) + stoi(ans2);
    return 0;
}