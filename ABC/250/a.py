def solve(H, W, R, C):
    if H < R or W < C:
        return 0
    if H == 1 and W == 1:
        return 0

    if R == 1 or R == H:
        if 1 < C and C < W:
            res =  3
        else:
            res =  2
    else:
        if 1 < C and C < W:
            res =  4
        else:
            res =  3
    if H == 1 or W == 1:
        res -= 1
    return res

if __name__ == "__main__":
    H, W = map(int, input().split())
    R, C = map(int, input().split())
    print(solve(H, W, R, C))
