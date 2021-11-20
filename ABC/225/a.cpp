#include <iostream>
#include <string>
using namespace std;


int main()
{
    int count = 0;
    string S;
    cin >> S;
    for (int i = 0; i < 3; i++) {
        for (int j = i; j < 3 ; j++) {
            if (i == j) {continue;}
            if (S[i] == S[j]) {
                count += 1;
            }
        }
    }
    if (count == 3) {cout << 1 << endl;}
    if (count == 1) {cout << 3 << endl;}
    if (count == 0) {cout << 6 << endl;}
}