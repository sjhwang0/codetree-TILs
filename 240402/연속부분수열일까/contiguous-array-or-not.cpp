#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    vector<int> a(n);
    vector<int> b(m);

    for(int i = 0; i<n; i++) cin >> a[i];
    for(int i = 0; i<m; i++) cin >> b[i];

    bool yes = false;
    for(int i = 0; i<n-m+1; i++){
        bool satisfied = true;
        for(int j = 0; j<m; j++){
            if(a[i+j] != b[j]) satisfied = false;
        }
        if(satisfied) yes = true;
    }

    if(yes) cout << "Yes";
    else cout << "No";

    return 0;
}