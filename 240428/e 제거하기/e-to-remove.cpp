#include <iostream>
#include <string>

using namespace std;

int main() {
    string str;
    cin >> str;

    int s_index = str.find("e");
    str = str.erase(s_index, 1);

    cout << str;
    
    return 0;
}