#include <iostream>
#include <string>

using namespace std;

int main() {
    string arr, new_str = "";
    cin >> arr;

    int start_idx = 0;
    for(int i = 0;i < arr.length();i++){
        if(arr[i] != arr[i + 1]){
            new_str = new_str + arr[i] + to_string(i - start_idx + 1);
            start_idx = i + 1;
        }
    }

    cout << new_str.length() << "\n" << new_str;

    return 0;
}