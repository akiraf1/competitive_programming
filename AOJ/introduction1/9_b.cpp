#include <iostream>
#include <string>
using namespace std;


string shuffle(int shuffle_size, string text)
{
    return text.substr(shuffle_size) + text.substr(0, shuffle_size);
}


int main()
{
    int shuffle_times, shuffle_size;
    string text, text_set[10] = {};

    while(1) {
        cin >> text; // getline()使うと何故か無限ループに陥る
        if (text == "-") break;
        cin >> shuffle_times;
        for (int i = 0; i < shuffle_times; i++) {
            cin >> shuffle_size;
            text = shuffle(shuffle_size, text);
        }
        cout << text << endl;
    }

    return 0;
}