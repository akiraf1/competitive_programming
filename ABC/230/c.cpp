#include <iostream>
#include <string>
using namespace std;


int main()
{
  long long N;
  long long A;
  long long B;
  long long P;
  long long Q;
  long long R;
  long long S;

  cin >> N >> A >> B >> P >> Q >> R >> S;

  for (long long i = P; i <= Q; i++) {
    for (long long j = R; j <= S; j++) {
      if (i - j == A - B || i + j == A + B) cout << '#';
      else cout << '.';
    }
    cout << endl;
  }

  return 0;
}
