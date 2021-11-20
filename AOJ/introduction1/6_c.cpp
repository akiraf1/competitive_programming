#include <iostream>
using namespace std;


int main() 
{
    int n, b, f, r, v, residents[4][3][10] = {};

    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> b >> f >> r >> v;
        residents[b-1][f-1][r-1] += v;
    }

    for (int i = 0; i < 4; i++) {
        if (i > 0) cout << "####################" << endl;
        for (int j = 0; j < 3; j++) {
            for (int k = 0; k < 10; k++) {
                cout << " " << residents[i][j][k];
            }
            cout << endl;
        }
    }

    return 0;
}