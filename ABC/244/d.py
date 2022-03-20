if __name__ == "__main__":
    s = list(map(str, input().split()))
    t = list(map(str, input().split()))
    if s == t:
        print("Yes")
    elif s[0] == t[0] or s[1] == t[1] or s[2] == t[2]:
        print("No")
    else:
        print("Yes")
