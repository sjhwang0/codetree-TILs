#include <iostream>
#include <string>

using namespace std;

int main() {
    string str;
    char alpa;

    cin >> str >> alpa;

    if(str.find(alpa) == string::npos) cout << "No";
    else cout << str.find(alpa);
    return 0;
}