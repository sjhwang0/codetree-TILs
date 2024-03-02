#include <iostream>
using namespace std;

int main() {
    int math_a, eng_a, math_b, eng_b;

    cin >> math_a >> eng_a >> math_b >> eng_b;

    if(math_a > math_b) cout << 'A';
    else if(math_a == math_b && eng_a > eng_b) cout << 'A';
    else cout << 'B';

    return 0;
}