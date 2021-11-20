#include <iostream>
#include <memory>
#include <cmath>
using namespace std;


int main()
{
    int N, M, B[10000][7], ele, start_i, start_j, relative_i, relative_j, expect_val;
    bool is_part = true;
    cin >> N >> M;

    // 行列B読み取り
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            cin >> ele;
            B[i][j] = ele;
        }
    }

    // 第一要素の相対位置
    start_i = (B[0][0] - 1) / 7;
    start_j = (B[0][0] - 1) % 7;
    
    if (start_j + M > 7) {
        // 列がはみ出していないか
        is_part = false;
    }else {
        // 各要素の判定
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < M; j++) {
                relative_i = i + start_i;
                relative_j = j + start_j;
                expect_val = 7 * (relative_i) + relative_j + 1;
                if (B[i][j] != expect_val) {
                    is_part = false;
                }
            }
        }
    }
    if (is_part) {
        cout << "Yes" << endl;
    }else {
        cout << "No" << endl;
    }
}