#include <iostream>
using namespace std;

int main() {
    int temp, grade[4] = {};
    char symp;
    
    for(int i = 0;i < 3;i++){
        cin >> symp >> temp;
        if(symp == 'Y' && temp >= 37) grade[0]++;
        else if(symp == 'N' && temp >= 37) grade[1]++;
        else if(symp == 'Y' && temp < 37) grade[2]++;
        else grade[3]++;
    }

    for(int i = 0;i < 4;i++){
        cout << grade[i] << " ";
    }
    if(grade[0] >= 2) cout << "E";
    
    return 0;
}