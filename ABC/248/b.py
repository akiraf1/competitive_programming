import math


if __name__ == "__main__":
    a, b, k = map(int, input().split())
    # print(math.ceil(math.log(b/a, k)))
    for i in range(10**9 + 1):
        if a * k**i >= b:
            print(i)
            break