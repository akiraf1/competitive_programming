if __name__ == "__main__":
    n, m = map(int, input().split())
    a = list(map(int, input().split()))
    b = list(map(int, input().split()))
    for pasta_len in b:
        if pasta_len not in a:
            print("No")
            exit(0)
        else:
            a.remove(pasta_len)
    print("Yes")
