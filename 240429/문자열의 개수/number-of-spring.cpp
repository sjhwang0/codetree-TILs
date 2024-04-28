#include <iostream>
#include <string>
#include <sstream>
#include <vector>
using namespace std;

int main() {
    string result[200];
    int cnt = 0;

    for(int i = 0;i < 200;i++){
        cin >> result[i];
        if(result[i] == "0") break;
        cnt++;
    }

    cout << cnt << "\n";
    for(int i = 0;i < cnt;i++){
        if(i % 2 == 0) cout << result[i] << "\n";
    }
    return 0;
}