#include <cmath>
#include <iomanip>
#include <iostream>
#include <vector>
#include <numeric>
using namespace std;


int main()
{
    int n;
    int input;
    vector<int> x_vec;
    vector<int> y_vec;

    cout << fixed << setprecision(5);

    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> input;
        x_vec.push_back(input);
    }
    for (int i = 0; i < n; i++) {
        cin >> input;
        y_vec.push_back(input);
    }

    // p = 1...3
    for (int p = 1; p <= 3; p++) {
        long long d_sum = 0;
        for (int i = 0; i < n; i++) {
            d_sum += pow(abs(x_vec[i] - y_vec[i]), p);
        }
        cout << pow(d_sum, 1.0/p) << endl;
    }

    // p = \infty
    double max = 0;
    for (int i = 0; i < n; i++) {
        if (abs(x_vec[i] - y_vec[i]) > max) max = abs(x_vec[i] - y_vec[i]);
    }
    cout << max << endl;

    return 0;
}