#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


int main()
{
  int N;
  int K;
  int student_score_sum;
  int input;
  vector<int> score;
  vector<int> score_sorted;
  cin >> N >> K;
  for (int i = 0; i < N; i++) {
    student_score_sum = 0;
    for (int j = 0; j < 3; j++) {
      cin >> input;
      student_score_sum += input;
    }
    score.push_back(student_score_sum);
    score_sorted.push_back(student_score_sum);
  }

  sort(score_sorted.begin(), score_sorted.end(), greater<int>());

  int border = score_sorted[K-1];

  for (int i = 0; i < N; i++) {
    if (score[i] + 300 >= border) cout << "Yes" << endl;
    else cout << "No" << endl;
  }

  return 0;
}