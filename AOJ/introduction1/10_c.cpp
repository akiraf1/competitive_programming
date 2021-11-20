#include <cmath>
#include <iomanip>
#include <iostream>
#include <vector>
#include <numeric>
using namespace std;


int main()
{
    int n;
    int input_score;

    cout << fixed << setprecision(5);

    while(1) {
        cin >> n;
        if (n == 0) break;

        vector<int> score;
        double mean;
        double variance = 0;

        for (int i = 0; i < n; i++) {
            cin >> input_score;
            score.push_back(input_score);
        }
        mean = accumulate(score.begin(), score.end(), 0) / double(n);
        for (int i = 0; i < n; i++) {
            variance += pow((score[i] - mean), 2.0) / n;
        }
        cout << sqrt(variance) << endl;
    }
}