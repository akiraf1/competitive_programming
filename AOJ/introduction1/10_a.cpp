#include <cmath>
#include <iomanip>
#include <iostream>
using namespace std;


int main()
{
    double x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;
    cout << fixed << setprecision(5);
    cout << sqrt(pow((x1 - x2), 2.0) + pow((y1 - y2), 2.0)) << endl;
}