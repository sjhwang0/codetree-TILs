#include <iostream>
#include <string>

using namespace std;

int main() {
    string str1, str2, str3;
    cin >> str1 >> str2 >> str3;

    int len1 = str1.length(), len2 = str2.length(), len3 = str3.length();
    int max_len, min_len;

    if(len1 >= len2 && len1 >= len3) max_len = len1;
    else if(len2 >= len1 && len2 >= len3) max_len = len2;
    else max_len = len3;

    if(len1 <= len2 && len1 <= len3) min_len = len1;
    else if(len2 <= len1 && len2 <= len3) min_len = len2;
    else min_len = len3;

    cout << max_len - min_len;

    return 0;
}