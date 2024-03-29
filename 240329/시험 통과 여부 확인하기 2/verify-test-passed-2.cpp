#include <iostream>
using namespace std;

int main() {
    int score[4], cnt = 0;
    double avg = 0;
    int n;
    cin >> n;

    for(int i = 0;i < n;i++){
        avg = 0;
        for(int j = 0;j < 4;j++){
            cin >> score[j];
            avg += score[j];
        }
        avg /= 4;
        if(avg >= 60){
            cout << "pass" << "\n";
            cnt++;
        }
        else cout << "fail" << "\n";
    }

    cout << cnt;
    return 0;
}