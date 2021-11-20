#include <iostream>
#include <vector>
using namespace std;


int main()
{
  int N;
  int X;
  int input;
  int count = 1;
  vector<int> A;
  vector<int> friend_know;
  cin >> N >> X;
  X--;
  for (int i = 0; i < N; i++) {
    cin >> input;
    A.push_back(input-1);
    if (i == X) friend_know.push_back(1);
    else friend_know.push_back(0);
  }
  while(1) {
    X = A[X]; // 教える
    if (friend_know[X]) break; // 既に知ってる
    else friend_know[X] = 1;
    count += 1;
  }

  // for (int i = 0; i < N; i++) {
  //   cout << A[i];
  // }
  // cout << endl;

  // for (int i = 0; i < N; i++) {
  //   cout << friend_know[i];
  // }
  // cout << endl;

  cout << count << endl;

  return 0;
}