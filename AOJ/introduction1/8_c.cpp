#include <iostream>
#include <string>
using namespace std;


int main() 
{
    int alphabets[26] = {};
    char ch;
    while(cin >> ch) {
        if (int(ch) >= 65 && int(ch) <= 90) {
            alphabets[int(ch - 'A')] += 1;
        } else if (int(ch) >= 97 && int(ch) <= 122) {
            alphabets[int(ch - 'a')] += 1;
        }
    }
    for (int i = 0; i < 26; i++) {
        cout << char(i + int('a')) << " : " << alphabets[i] << endl;
    }

    return 0;
}