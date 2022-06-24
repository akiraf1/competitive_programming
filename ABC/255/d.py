import numpy as np

def binary_search(sorted_list, value):
    # ソート済みリストに対して「value以上」を満たす最小のインデックスを返す

    ng = - 1
    ok = len(sorted_list)

    while (abs(ok - ng) > 1):
        mid = (ok + ng) // 2

        if sorted_list[mid] >= value:
            ok = mid
        else:
            ng = mid

    return ok


def solve(n, a, s, x):
    if x <= s[0]:
        return s[-1] - n*x
    elif x >= s[-1]:
        return n*x - s[-1]
    idx = binary_search(a, x)
    return s[-1] - 2 * s[idx-1] + (2*idx - n) * x # x以下とx以上に分けて足し合わせる



if __name__ == "__main__":
    n, q = map(int, input().split())
    a = list(map(int, input().split()))
    a = sorted(a)
    s = np.cumsum(a) # 累積和

    for i in range(q):
        print(solve(n, a, s, int(input())))