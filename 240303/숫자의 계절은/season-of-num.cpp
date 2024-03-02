#include <iostream>
using namespace std;

int main() {
    int m;

    cin >> m;

    if(m < 3 || m == 12) cout << "Winter";
    else if(m < 6) cout << "Spring";
    else if(m < 9) cout << "Summer";
    else cout << "Fall";

    return 0;
}