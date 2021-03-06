#include <iostream>
#include <cstring>
using namespace std;



int lcs(string S, string T) {
  int dp[1010][1010];
  memset(dp, 0, sizeof(dp));    // 初期化

  for (int i = 0; i < S.size(); ++i) {
    for (int j = 0; j < T.size(); ++j) {
      if (S[i] == T[j]) dp[i+1][j+1] = dp[i][j] + 1;
      else dp[i+1][j+1] = max(dp[i+1][j], dp[i][j+1]);
    }
  }

  return dp[S.size()][T.size()];
}

int main() {
  int n;
  string S, T;

  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> S;
    cin >> T;
    cout << lcs(S, T) << endl;
  }
}