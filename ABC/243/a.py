if __name__ == "__main__":
    v, a, b, c = map(int, input().split())
    v  = v % (a + b + c)
    if v < a:
        print("F")
    elif v < a + b:
        print("M")
    elif v < a + b + c:
        print("T")
    else:
        pass
