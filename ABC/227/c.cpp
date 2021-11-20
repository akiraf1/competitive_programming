#include <iostream>
#include <algorithm>
using namespace std;

// NOT ACCEPTED
int main()
{
  int count = 0;
  int N;
  cin >> N;
  for (int c = N; c > 0; c--) {
    for (int b = min(c, N/c); b > 0; b--) {
      count += min(b, N/(c*b));
      // for (int a = min(b, N/(c*b)); a > 0; a--){
      //   count += 1;
      //   // cout << "(" << a << ", " << b << ", " << c << ")" << endl;
      // }
    }
  }
  cout << count << endl;

  return 0;
}
