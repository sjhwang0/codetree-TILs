#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    string str;
    int q;
    cin >> str >> q;

    int request, len = str.length();

    for(int i = 0;i < q;i++){
        cin >> request;
        if(request == 1)
            str = str.substr(1, len-1) + str.substr(0, 1);
        else if(request == 2)
            str = str.substr(len-1, 1) + str.substr(0, len-1);
        else
            reverse(str.begin(), str.end());
        cout << str << "\n";
    }
    return 0;
}