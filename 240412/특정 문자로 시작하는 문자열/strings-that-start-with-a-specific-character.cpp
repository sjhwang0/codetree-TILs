#include <iostream>
#include <string>

using namespace std;

int main() {
    int n;
    cin >> n;

    string arr[20];
    for(int i = 0;i < n;i++){
        cin >> arr[i];
    }

    char alpa;
    cin >> alpa;

    int sum = 0, cnt = 0;
    double avg = 0;
    for(int i = 0;i < n;i++){
        if(arr[i][0] == alpa){
            cnt++;
            sum += arr[i].length();
        } 
    }
    avg = (double)sum / cnt;

    cout << fixed;
    cout.precision(2);

    cout << cnt << " " << avg;
    return 0;
}