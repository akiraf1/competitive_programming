#include <iostream>
using namespace std;


int main()
{
    int r, c, input, table[101][101] = {};

    cin >> r >> c;
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            cin >> input;
            table[i][j] = input;
            table[i][c] += input;
            table[r][j] += input;
            table[r][c] += input;
        }
    }

    for (int i = 0; i <= r; i++) {
        for (int j = 0; j <= c; j++) {
            if (j > 0) cout << ' ';
            cout << table[i][j];
        }
        cout << endl;
    }
}