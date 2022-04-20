if __name__ == "__main__":
    n = int(input())
    s = [[], [1]]
    for i in range(2, n+1):
        s.append(s[i-1] + [i] + s[i-1])
    print(" ".join(map(str, s[n])))
