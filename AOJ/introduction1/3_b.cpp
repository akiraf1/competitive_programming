#include <iostream>
using namespace std;

int main()
{
    int a;
    for (int i = 1; ; i++) {
        cin >> a;
        if (a == 0) {break;}
        cout << "Case " << i << ": " << a << endl;
    }
}
