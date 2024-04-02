#include <iostream>
using namespace std;

int main() {
    int n, q, cnt = 0;
    int arr[100];
    cin >> n >> q;

    for(int i = 0;i < n;i++)
        cin >> arr[i];

    for(int i = 0;i < q;i++){
        int q_order, value;
        cin >> q_order >> value;
        if(q_order == 1) cout << arr[value - 1] << "\n";
        else if(q_order == 2){
            int index = 0;
            for(int j = 0;j < n;j++){
                if(arr[j] == value){
                    index = j + 1;
                    break;
                }
            }
            cout << index << "\n";
        }
        else{
            int value2;
            cin >> value2;
            for(int i = value - 1;i < value2;i++){
                cout << arr[i] << " ";
            }
            cout << "\n";
        }
    }
    return 0;
}