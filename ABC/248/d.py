from pprint import pprint as pp


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


if __name__ == "__main__":
    n = int(input())
    a = list(map(int, input().split()))
    q = int(input())
    value_index_memo = {}
    for i, a_i in enumerate(a):
        if a_i not in value_index_memo:
            value_index_memo[a_i] = [i]
        else:
            value_index_memo[a_i].append(i)


    for i in range(q):
        l, r, x = map(int, input().split())
        l -= 1
        r -= 1

        if x not in value_index_memo: # O(n)かかっちゃってる!!
            print(0)
            continue

        right_idx = binary_search(value_index_memo[x], r+1)
        left_idx = binary_search(value_index_memo[x], l)
        print(right_idx - left_idx)
