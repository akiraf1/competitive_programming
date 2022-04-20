def judge(n, s, t):
    assert(len(s) == len(t))
    assert(n == len(s))
    for i in range(n):
        if (s[i] in s[:i] or s[i] in s[i+1:] or s[i] in t[:i] or s[i] in t[i+1:]) and (t[i] in s[:i] or t[i] in s[i+1:] or t[i] in t[:i] or t[i] in t[i+1:]):
            return False
    return True

if __name__ == "__main__":
    n = int(input())
    s = []
    t = []
    for i in range(n):
        s_i, t_i = map(str, input().split())
        s.append(s_i)
        t.append(t_i)
    if judge(n, s, t):
        print("Yes")
    else:
        print("No")