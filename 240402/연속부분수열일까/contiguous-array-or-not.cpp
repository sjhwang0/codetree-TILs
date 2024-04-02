#include <bits/stdc++.h>
using namespace std;

int main() {
    int n1, n2;
    cin >> n1 >> n2;
    vector<int> a(n1);
    vector<int> b(n2);

    for(int i = 0;i < n1;i++) cin >> a[i];
    for(int i = 0;i < n2;i++) cin >> b[i];

    bool yes = false;
    for(int i = 0;i < n1-n2+1;i++){
        bool satisfied = true;
        for(int j = 0;j < n2;j++){
            if(a[i+j] != b[j]) satisfied = false; 
        }
        if(satisfied) yes = true;
    }

    if(yes) cout << "Yes";
    else cout << "No";

    return 0;
}