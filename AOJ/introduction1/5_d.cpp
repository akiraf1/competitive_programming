#include <iostream>
#include <string>
using namespace std;


void call_no_goto(int n)
{
    for (int i = 1; i <= n; i++) {
        if (i % 3 == 0) {
            cout << " " << i;
        } else if (to_string(i).find("3") != string::npos) {
            cout << " " << i;
        }
    }
    cout << endl;
}

int main() {
    int n;
    cin >> n;
    call_no_goto(n);
}