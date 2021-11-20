#include <iostream>
#include <string>
using namespace std;

int main() 
{
    int H, W;
    for (int i = 0; ; i++) {
        cin >> H >> W;
        if (H == 0 && W == 0) {
            break;
        }
        if (i > 0) {
            cout << endl;
        }
        for (int j = 0; j < H; j++) {
            cout << string(W, '#') << endl;
        }
    }
}