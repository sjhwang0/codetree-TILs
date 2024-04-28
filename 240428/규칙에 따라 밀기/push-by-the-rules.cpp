#include <iostream>
#include <string>

using namespace std;

int main() {
    string s, request;
    cin >> s >> request;

    int len = s.length(), r_len = request.length();

    for(int i = 0;i < r_len;i++){
        if(request[i] == 'L')
            s = s.substr(1, len-1) + s.substr(0, 1);
        else if(request[i] == 'R')
            s = s.substr(len-1, 1) + s.substr(0, len-1);
    }

    cout << s;

    return 0;
}