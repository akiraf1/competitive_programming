#include <iostream>
using namespace std;


int main()
{
  int N;
  int K;
  int A;
  cin >> N >> K >> A;
  int shift = (K-1) % N; // 周回分無視してAから何人配るか
  if (A + shift <= N) cout << A + shift << endl;
  else cout << A + shift - N << endl;

  return 0;
}