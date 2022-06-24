from itertools import count
import math


def count_multiples(n, x):
    # n以下のxの倍数の和
    n = n // x
    return x * n * (n + 1) // 2

def lcm(a, b):
    # aとbの最小公倍数
    return (a * b) // math.gcd(a, b)

if __name__ == "__main__":
    n, a, b = map(int, input().split())
    sum_by_n = count_multiples(n, 1)
    sum_a_and_b = count_multiples(n, a) + count_multiples(n, b) - count_multiples(n, lcm(a, b))
    print(sum_by_n - sum_a_and_b)
