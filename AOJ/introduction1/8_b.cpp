#include <iostream>
#include <string>
using namespace std;


int main()
{
    string x;
    while(1) {
        getline(cin, x);
        if (x == "0") break;
        int sum = 0;
        for (int i = 0; i < x.size(); i++) {
            sum += int(x[i]-'0');
        }
        cout << sum << endl;
    }
}