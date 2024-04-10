#include <iostream>
using namespace std;

int main(){
    int n, m;
    cin >> n >> m;

    int arr[100][100] = {};
    int num = 1;

    for(int row = 0;row < n;row++){
        for(int col = 0;col < m;col++){
            if(arr[row][col] == 0){
                int curr_col = col;
                int curr_row = row;

                while(curr_col >= 0 && curr_row < n){
                    arr[curr_row][curr_col] = num;

                    curr_row++;
                    curr_col--;
                    num++;
                }
            }
        }
    }

    for(int row = 0;row < n;row++){
        for(int col = 0;col < m;col++)
            cout << arr[row][col] << " ";
        cout << "\n";
    }
    return 0;
}