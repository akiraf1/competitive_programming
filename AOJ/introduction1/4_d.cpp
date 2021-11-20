#include <iostream>
using namespace std;


int main()
{
    // 0 < n <= 10000
    // -1000000 <= input <= 1000000
    // よって-10^12 <= sum <= 10^12
    int n, input, min, max;
    long long int sum = 0; 
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> input;
        sum += input;
        if (i == 0) {
            min = input;
            max = input;
        }else if (input > max) {
            max = input;
        }else if (input < min) {
            min = input;
        }
    }
    cout << min << " " << max << " " << sum << endl;
}