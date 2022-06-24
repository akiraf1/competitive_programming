if __name__ == "__main__":
    n, k = map(int, input().split())
    a = list(map(int, input().split()))

    ## kのあまりごとに分割しそれぞれソートする
    # この方法だとTLE
    # sortedに渡す配列を都度生成しているためk*n*nlognかかっている
    # tmp_lst = []
    # for i in range(1, k+1):
    #     if i == k:
    #         tmp_lst.append(sorted([val for j, val in enumerate(a) if (j+1)%k == 0]))
    #     else:
    #         tmp_lst.append(sorted([val for j, val in enumerate(a) if (j+1)%k == i]))

    tmp_lst = [[] for _ in range(k)]
    for i, val in enumerate(a):
        tmp_lst[i%k].append(val)
    for i in range(k):
        tmp_lst[i].sort()

    lst = []
    for i in range(len(tmp_lst[0])):
        for j in range(k):
            if len(tmp_lst[j]) < i+1:
                break
            lst.append(tmp_lst[j][i])
    if lst == sorted(a):
        print("Yes")
    else:
        print("No")
