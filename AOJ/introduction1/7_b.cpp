#include <iostream>
using namespace std;


int count_comb(int n, int x)
{
    int count = 0;
    for (int i = 1; i <= n; i++) {
        for (int j = i + 1; j <= n; j++) {
            for (int k = j + 1; k <= n; k++) {
                if (i + j + k == x) count += 1;
            }
        }
    }
    return count;
}

int main()
{
    int n, x;
    for (int i = 0; ; i++) {
        cin >> n >> x;
        if (n == 0 && x == 0) break;
        cout << count_comb(n, x) << endl;
    }
}