#include <iostream>
#include <string>
using namespace std;

int culc(int a, int b, string op)
{
    if (op == "+") {
        cout << a + b << endl;
    }else if (op == "-") {
        cout << a - b << endl;
    }else if (op == "*") {
        cout << a * b << endl;
    }else if (op == "/") {
        cout << a / b << endl;
    }
}

int main()
{
    int a, b;
    string op;
    for (int i = 1; ; i++) {
        cin >> a >> op >> b;
        if (op == "?") {break;}
        culc(a, b, op);
    }
}