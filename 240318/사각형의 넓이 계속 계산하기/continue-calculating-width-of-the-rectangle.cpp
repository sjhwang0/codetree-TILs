#include <iostream>

using namespace std;

int main() {
    int height, width;
    char c;

    while(true){
        cin >> width >> height >> c;
        
        if(c == 'C'){
            cout << width * height;
            break;
        }

        cout << width * height << endl;
    }
    return 0;
}