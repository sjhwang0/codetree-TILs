#include <iostream>
using namespace std;

int main() {
    int temp_a, temp_b, temp_c;
    char symp_a, symp_b, symp_c;

    cin >> symp_a >> temp_a;
    cin >> symp_b >> temp_b;
    cin >> symp_c >> temp_c;

    if(symp_a == 'Y' && temp_a >= 37){
        if((symp_b == 'Y' && temp_b >= 37) || (symp_c == 'Y' && temp_c >= 37))
            cout << "E";
        else 
            cout << "N";
    }
    else{
        if((symp_b == 'Y' && temp_b >= 37) && (symp_c == 'Y' && temp_c >= 37))
            cout << "E";
        else
            cout << "N";
    }

    return 0;
}