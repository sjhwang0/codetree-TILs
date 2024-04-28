#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
    string s1, s2;
    cin >> s1 >> s2;

    int s1_len = s1.size(), s2_len = s2.size();

    for(int i = 0;i < s1_len;i++){
        if(isdigit(s1[i]) == 0) s1 = s1.substr(0, i);
    }
    
    for(int i = 0;i < s2_len;i++){
        if(isdigit(s2[i]) == 0) s2 = s2.substr(0, i);
    }

    cout << stoi(s1) + stoi(s2);
    return 0;
}