if __name__ == "__main__":
    n = int(input())
    table = [0 for _ in range(2*10**5)]
    for i in range(n):
        l, r = map(int, input().split())
        table[l-1] += 1
        table[r-1] -= 1
    for i in range(1, 2*10**5):
        table[i] += table[i-1]

    intervals = []
    within_interval = False
    for i in range(0, 2*10**5):
        if table[i] > 0 and not within_interval: # 区間の左端
            within_interval = True
            intervals.append([i+1])
        elif table[i] == 0 and within_interval:  # 区間の右端
            within_interval = False
            intervals[-1].append(i+1)
        if i == 2*10**5-1 and within_interval:   # 最後
            intervals[-1].append(i+1)

    for interval in intervals:
        print(" ".join(map(str, interval)))
