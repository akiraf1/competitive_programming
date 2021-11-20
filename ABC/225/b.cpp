#include <iostream>
using namespace std;


int main()
{
    int N, a, b, pre_a, pre_b;
    bool tree = true;
    cin >> N;
    for (int i = 0; i < N - 1; i++) {
        cin >> a >> b;
        if (i > 0 && a != pre_a && a != pre_b && b != pre_a && b != pre_b) {
            tree = false;
            break;
        }
        pre_a = a;
        pre_b = b;
    }
    if (tree) {
        cout << "Yes" << endl;
    }else {
        cout << "No" << endl;
    }
}