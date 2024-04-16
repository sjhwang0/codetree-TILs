#include <iostream>
#include <string>

using namespace std;

int main() {
    string str;
    int n, q;

    cin >> str >> n;
    for(int i = 0;i < n;i++){
        cin >> q;
        if(q == 1){
            int a, b;
            cin >> a >> b;
            char temp = str[a-1];
            str[a-1] = str[b-1];
            str[b-1] = temp;
            cout << str << "\n"; 
        }
        else if(q == 2){
            char a, b;
            cin >> a >> b;
            for(int j = 0;j < str.length();j++){
                if(str[j] == a) str[j] = b;
            }
            cout << str << "\n";
        }
    }
    return 0;
}