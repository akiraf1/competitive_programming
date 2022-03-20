if __name__ == "__main__":
    n = int(input())
    size_lst = [] # i番目の行列のサイズはlst[i] * lst[i+1]
    for i in range(n):
        if i == 0:
            size_lst = list(map(int, input().split()))
        else:
            _, i_size = map(int, input().split())
            size_lst.append(i_size)

    # 初期化
    min_cost = [[0] * n for _ in range(n)]

    for num in range(2, n+1): # 積を計算する行列の数 2 -> n
        for i in range(0, n - num + 1): # 開始番号 0 -> n - num
            j = i + num - 1 # 終端番号
            for k in range(i, j):
                # k番目とk+1番目の間を最後にかける
                # k: i -> j-1
                k_cost = min_cost[i][k] + size_lst[i] * size_lst[k+1] * size_lst[j+1] + min_cost[k+1][j]
                if k == i:
                    cost = k_cost
                else:
                    cost = min(k_cost, cost)
            min_cost[i][j] = cost
    print(min_cost[0][n-1])