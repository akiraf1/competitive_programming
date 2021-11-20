#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
    double r;
    cin >> r;
    cout << fixed << setprecision(20);
    cout << M_PI * pow(r, 2) << " " << 2 * M_PI * r << endl;
}
