def gcd(a, b):
    # ユークリッドの互除法
    while(a % b > 0):
        d = a % b
        a = b
        b = d
    return b


if __name__ == "__main__":
    a, b = map(int, input().split())
    print(gcd(a, b))
