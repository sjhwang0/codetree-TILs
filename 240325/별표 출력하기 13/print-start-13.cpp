#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    for(int i = 0;i < n;i++){
        if(i % 2 == 0){
            for(int j = 0;j < n - i / 2;j++){
                cout << "* ";
            }
        }
        else{
            for(int j = 0;j < 1 + (i - 1) / 2;j++){
                cout << "* ";
            }
        }
        cout << endl;
    }
    for(int i = n-1;i >= 0;i--){
        if(i % 2 == 0){
            for(int j = 0;j < n - i / 2;j++){
                cout << "* ";
            }
        }
        else{
            for(int j = 0;j < 1 + (i - 1) / 2;j++){
                cout << "* ";
            }
        }
        cout << endl;
    }
    return 0;
}