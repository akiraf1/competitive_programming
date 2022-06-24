if __name__ == "__main__":
    n = int(input())
    a = list(map(int, input().split()))
    p = 0
    if n >=3:
        p += n-3
        if sum(a[-3:]) >= 4:
            p += 1
        if sum(a[-2:]) >= 4:
            p += 1
        if a[-1] == 4:
            p += 1
    elif n == 2:
        if sum(a[-2:]) >= 4:
            p += 1
        if a[-1] == 4:
            p += 1
    elif n == 1:
        if a[-1] == 4:
            p += 1
    print(p)
