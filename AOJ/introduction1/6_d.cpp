#include <iostream>
using namespace std;


int main() 
{
    int n, m, A[100][100] = {}, b[100] = {}, c[100] = {};

    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> A[i][j];
        }
    }
    for (int i = 0; i < m; i++) {
        cin >> b[i];
    }

    for (int i = 0; i < n; i++) {
        int sum = 0;
        for (int j = 0; j < m; j++) {
            sum += A[i][j] * b[j];
        }
        c[i] = sum;
    }

    for (int i = 0; i < n; i++) {
        cout << c[i] << endl;
    }

    return 0;
}