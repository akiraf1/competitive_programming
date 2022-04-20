#include <iostream>
#include <cstring>
using namespace std;



int lcs(string S, string T) {
  // 文字列Sと文字列Tの最大共通文字列の長さ

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
  string S = "abcbdab";
  string T = "bdcaba";

  cout << lcs(S, T) << endl; // 4
}