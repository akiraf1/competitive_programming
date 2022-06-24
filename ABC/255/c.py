def solve(x, a, d, n):
    if d < 0:
        x = -x
        a = -a
        d = -d
    last = d*(n-1) + a
    if x <= a:
        return abs(a - x)
    elif x >= last:
        return abs(last - x)
    x_shifted = (x - a) % d
    return min(x_shifted,  d - x_shifted)

if __name__ == "__main__":
    x, a, d, n = map(int, input().split())
    print(solve(x, a, d, n))