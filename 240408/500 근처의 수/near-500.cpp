#include <iostream>
using namespace std;

int main() {
    int arr[10], over = 1001, under = 0;

    for(int i = 0;i < 10;i++)
        cin >> arr[i];

    for(int i = 0;i < 10;i++){
        if(arr[i] > 500 && arr[i] < over) over = arr[i];
        if(arr[i] < 500 && arr[i] > under) under = arr[i];
    }

    cout << under << " " << over;
    return 0;
}