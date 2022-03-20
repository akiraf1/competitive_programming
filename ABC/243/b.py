if __name__ == "__main__":
    n = int(input())
    a = list(map(int, input().split()))
    b = list(map(int, input().split()))

    count1 = 0
    for i in range(n):
        if a[i] == b[i]:
            count1 += 1
    count2 = len(set(a) & set(b)) - count1

    print(count1)
    print(count2)
