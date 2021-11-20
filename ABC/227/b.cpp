#include <iostream>
using namespace std;


int main()
{
  int N;
  int S;
  bool estimate;
  int count = 0;
  cin >> N;
  for (int i = 0; i < N; i++) {
    cin >> S;
    estimate = false;
    for (int a = 1; a <= 142; a++) {
      for (int b = 1; b <= 142; b++) {
        if (S == 4 * a * b + 3 * a + 3 * b) estimate = true;
      }
    }
    if (!estimate) count += 1;
  }
  cout << count << endl;

  return 0;
}