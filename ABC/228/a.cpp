#include <iostream>
using namespace std;


int main()
{
  int S;
  int T;
  int X;
  cin >> S >> T >> X;
  if (S < T) {
    if (S <= X && X < T) cout << "Yes" << endl;
    else cout << "No" << endl;
  } else {
    if (X < T or S <= X) cout << "Yes" << endl;
    else cout << "No" << endl;
  }

  return 0;
}