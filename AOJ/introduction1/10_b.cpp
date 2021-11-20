#include <cmath>
#include <iomanip>
#include <iostream>
using namespace std;


int main()
{
    int deg;
    double rad;
    double PI = acos(-1);
    double a;
    double b;
    double c;
    double S;
    double L;
    double h;

    cout << fixed << setprecision(5);

    cin >> a >> b >> deg;
    rad = deg * PI / 180;
    S = a * b * sin(rad) / 2;
    c = sqrt(pow(a, 2.0) + pow(b, 2.0) - 2 * a * b * cos(rad));
    L = a + b + c;
    h = b * sin(rad);
    cout << S << " " << L << " " << h << endl;
}