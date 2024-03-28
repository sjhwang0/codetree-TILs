#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    for(int i = 0;i < n;i++){
        int a, b, mul_val = 1;
        cin >> a >> b;
        for(int i = a;i <= b;i++){
            mul_val *= i;
        }
        cout << mul_val << "\n";
    }
    return 0;
}