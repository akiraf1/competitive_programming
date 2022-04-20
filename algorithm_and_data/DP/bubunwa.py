# 部分和問題

from pprint import pprint as pp


if __name__ == "__main__":
    n = int(input())
    a = list(map(int, input().split()))
    A = int(input())

    # dp[i][j]: i−1番目までで総和をjにできるかどうか(bool)
    dp = [[True] + [False]*(A)]
    for i in range(n):
        dp.append([])
        for j in range(A+1):
            if j >= a[i]:
                dp[i+1].append(dp[i][j - a[i]] or dp[i][j])
            else:
                dp[i+1].append(dp[i][j])

    print("\n", dp[n][A], "\n")

    pp(dp)
