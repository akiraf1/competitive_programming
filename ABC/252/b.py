if __name__ == "__main__":
    n, k = map(int, input().split())
    a = list(map(int, input().split()))
    b = list(map(int, input().split()))
    max_a = sorted(a)[-1]
    for idx in b:
        if a[idx-1] == max_a:
            print("Yes")
            exit(0)
    print("No")
