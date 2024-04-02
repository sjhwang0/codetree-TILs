#include <iostream>
using namespace std;

int main() {
    char arr[6] = {'L', 'E', 'B', 'R', 'O', 'S'};
    char a;
    int word = -1;
    cin >> a;

    for(int i = 0;i < 6;i++){
        if(arr[i] == a) word = i; 
    }
    
    if(word == -1) cout << "None";
    else cout << word;
    
    return 0;
}