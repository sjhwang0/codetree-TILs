#include <iostream>
#include <vector>

using namespace std;

void fillDiagonal(int n, int m) {
    vector<vector<int>> matrix(n, vector<int>(m, 0)); // n * m 크기의 2차원 벡터 생성

    int num = 1;

    for (int diag = 0; diag < n + m - 1; diag++) {
        int start_row = max(0, diag - m + 1);
        int count = min(diag + 1, min(n, m));
        for (int i = 0; i < count; i++) {
            int row = start_row + i;
            int col = min(m, diag + 1) - i - 1;
            if (row < n && col < m) // 유효한 인덱스인 경우에만 값을 할당
                matrix[row][col] = num++;
        }
    }

    // 출력
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int n, m;
    cin >> n >> m;
    fillDiagonal(n, m);
    return 0;
}