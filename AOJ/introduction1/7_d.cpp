#include <iostream>
using namespace std;


int main() 
{
    int n, m, l, A[100][100] = {}, B[100][100] = {};
    long long int C[100][100] = {};

    cin >> n >> m >> l;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> A[i][j];
        }
    }
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < l; j++) {
            cin >> B[i][j];
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < l; j++) {
            long long int sum = 0;
            for (int k = 0; k < m; k++) {
                sum += A[i][k] * B[k][j];
            }
            C[i][j] = sum;
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < l; j++) {
            if (j > 0) cout << ' ';
            cout << C[i][j];
        }
        cout << endl;
    }

    return 0;
}