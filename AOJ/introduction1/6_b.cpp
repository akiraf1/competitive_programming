#include <iostream>
#include <string>
using namespace std;


int main() 
{
    int n, num, cards[4][13] = {}; // suit: 0:S, 1:H, 2:C, 3:D
    char suit;
    char suits[] = {'S', 'H', 'C', 'D', '\0'};

    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> suit >> num;
        switch (suit) { // suitsを使って動的に格納できればswitchいらない
            case 'S':
                cards[0][num-1] = 1;
                break;
            case 'H':
                cards[1][num-1] = 1;
                break;
            case 'C':
                cards[2][num-1] = 1;
                break;
            case 'D':
                cards[3][num-1] = 1;
                break;
        }
    }
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 13; j++) {
            if (cards[i][j] == 0) {
                cout << suits[i] << ' ' << j + 1 << endl;
            }
        }
    }

    return 0;
}