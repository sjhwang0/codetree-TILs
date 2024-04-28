#include <iostream>
#include <string>

using namespace std;

int main() {
    string str, find_str;

    cin >> str >> find_str;
    
    int len = find_str.length();

    while(str.find(find_str) != string::npos){
        int s_index = str.find(find_str);
        str = str.erase(s_index, len);
    }

    cout << str;

    return 0;
}