#include <iostream>
#include <string>
using namespace std;


int main()
{
  string S;
  getline(cin, S);
  bool state = true;

  for (int i = 0; i < S.size(); i++) {
    if (i == 0 || i == S.size() - 1) continue;
    if (S[i] == 'o') {
      if (S[i-1] == 'o' || S[i+1] == 'o') state = false;
    } else {
      if (S[i-1] == S[i+1]) state = false;
    }
  }

  if (S.size() == 2 && S[0] == 'o' && S[1] == 'o') state = false;

  if (state) cout << "Yes" << endl;
  else cout << "No" << endl;

  return 0;
}