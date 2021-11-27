#include <iostream>
#include <string>
using namespace std;


int main()
{
  string A, B;
  cin >> A >> B;

  bool easy = true;
  int min_size = min(A.size(), B.size());
  for (int i = 0; i < min_size; i++) {
    int A_idx = A.size() - 1 - i;
    int B_idx = B.size() - 1 - i;
    if (int(A[A_idx]-'0') + int(B[B_idx]-'0') > 9) easy = false;
  }
  
  if (easy) cout << "Easy" << endl;
  else cout << "Hard" << endl;

  return 0;
}