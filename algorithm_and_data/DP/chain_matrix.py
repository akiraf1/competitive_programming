import random


def calculate_min_mult_cost(matrix_list):
    """
    行列積の計算コストの最小値
    i番目の行列のサイズはmatrix_list[i] * matrix_list[i+1]
    """
    n = len(matrix_list) - 1 # 行列の個数
    min_cost = [[0] * n for _ in range(n)] # 初期化

    for num in range(2, n + 1): # 積を計算する行列の個数 2 -> n
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
    return min_cost[0][n-1]


if __name__ == "__main__":
    size_lst = [30, 35, 15, 5, 10, 20, 25]
    # size_lst = [random.randint(1, 100) for _ in range(400)]
    # print(size_lst)
    print(calculate_min_mult_cost(size_lst))