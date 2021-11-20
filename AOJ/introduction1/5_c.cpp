#include <iostream>
#include <string>
using namespace std;


int print_board(int H, int W)
{
    for (int i = 0; i < H; i++) {
        if (i % 2 == 0) {
            for (int j = 0; j < W; j++) {
                if (j % 2 == 0) {
                    cout << '#';
                } else {
                    cout << '.';
                }
            }
            cout << endl;
        } else {
            for (int j = 0; j < W; j++) {
                if (j % 2 == 0) {
                    cout << '.';
                } else {
                    cout << '#';
                }
            }
            cout << endl;
        }
    }
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
        print_board(H, W);
    }
    return 0;
}