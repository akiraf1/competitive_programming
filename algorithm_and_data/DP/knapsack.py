# ナップサック問題

from pprint import pprint as pp


if __name__ == "__main__":
    n, W = map(int, input().split())
    weight = []
    value = []
    for i in range(n):
        w_in, v_in = map(int, input().split())
        weight.append(w_in)
        value.append(v_in)

    dp = [[0]*(W+1)]
    for i in range(n):
        dp.append([])
        for w in range(W+1):
            if w >= weight[i]:
                dp[i+1].append(max(dp[i][w-weight[i]] + value[i], dp[i][w]))
            else:
                dp[i+1].append(dp[i][w])

    print("\n", dp[n][W], "\n")

    pp(dp)
