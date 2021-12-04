#include <iostream>
#include <string>
using namespace std;


int main()
{
  int N;
  cin >> N;
  if (N >= 42) N += 1;
  
  if (N / 10 == 0) cout << "AGC00" + to_string(N) << endl;
  else cout << "AGC0" + to_string(N) << endl;
  

  return 0;
}