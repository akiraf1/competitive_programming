#include <iostream>
#include <string>
using namespace std;


int print_frame(int H, int W)
{
    cout << string(W, '#') << endl;
    for (int i = 1; i < H - 1; i++) {
        cout << '#' << string(W-2, '.') << '#' << endl;
    }
    cout << string(W, '#') << endl;
    return 0;
}

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
        print_frame(H, W);
    }
    return 0;
}