#include <iostream>
using namespace std;

int main(){
    int n, m;
    cin >> n >> m;

    int arr[100][100];
    int num = 1;

    for(int start_col = 0;start_col < m;start_col++){
        int curr_row = 0;
        int curr_col = start_col;

        while(curr_col >= 0 && curr_row < n){
            arr[curr_row][curr_col] = num;

            curr_row++;
            curr_col--;
            num++;
        }
    }
    
    for(int start_row = 1;start_row < n;start_row++){
        int curr_col = m - 1;
        int curr_row = start_row;

        while(curr_col >= 0 && curr_row < n){
            arr[curr_row][curr_col] = num;

            curr_row++;
            curr_col--;
            num++;
        }
    }

    for(int row = 0;row < n;row++){
        for(int col = 0;col < m;col++)
            cout << arr[row][col] << " ";
        cout << "\n";
    }

    return 0;
}