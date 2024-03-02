#include <iostream>
using namespace std;

int main() {
    double h, w;
    cin >> h >> w;

    double B = (w * (100 * 100)) / (h * h);

    cout << (int)B << endl;

    if(B >= 25) cout << "Obesity";
    
    return 0;
}