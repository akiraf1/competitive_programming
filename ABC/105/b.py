def solve(n):
    for i in range(n//4 + 1):
        for j in range(n//7 + 1):
            if i * 4 + j * 7 == n:
                return True

if __name__ == "__main__":
    n = int(input())
    if solve(n):
        print("Yes")
    else:
        print("No")