#include <algorithm>
#include <iostream>
#include <string>
using namespace std;


int main()
{
    int q, a, b;
    string str, order, p;
    cin >> str >> q;
    for (int i = 0; i < q; i++) {
        cin >> order;
        if (order == "print") {
            cin >> a >> b;
            for (int j = a; j <= b; j++) cout << str[j];
            cout << endl;
        } else if (order == "reverse") {
            cin >> a >> b;
            string tmp_str;
            tmp_str = str.substr(a, b-a+1);
            reverse(tmp_str.begin(), tmp_str.end());
            str.replace(a, b-a+1, tmp_str);
        } else if (order == "replace") {
            cin >> a >> b >> p;
            str.replace(a, b-a+1, p);
        }
    }
}