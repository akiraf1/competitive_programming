if __name__ == "__main__":
    n, m, k = map(int, input().split())
    dp = [[0] + [1] * m + [0] * (k - m)] # dp[i][j]: i番目までで和がjとなる数列の数
    for i in range(1, n):
        dp_i = []
        for j in range(k+1):
            start_idx = max(0, j-m)
            dp_i.append(sum(dp[i-1][start_idx:j])) # j-m番からj-1番までの和
        dp.append(dp_i)
    print(sum(dp[n-1]) % 998244353)