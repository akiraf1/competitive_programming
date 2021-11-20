#include <iostream>
#include <string>
using namespace std;


int main()
{
    int n, taro_score = 0, hanako_score = 0;
    string taro_card, hanako_card;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> taro_card >> hanako_card;
        if (taro_card == hanako_card) {
            taro_score += 1;
            hanako_score += 1;
        } 
        else if (taro_card > hanako_card) taro_score += 3;
        else hanako_score += 3;
    }
    cout << taro_score << " " << hanako_score << endl;
}