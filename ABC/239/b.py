if __name__ == "__main__":
    X = int(input())
    if X >= 0:
        X_str = str(X)
        if len(X_str) == 1:
            print(0)
        else:
            print(X_str[:-1])
    else:
        X_str = str(X)[1:]
        if len(X_str) == 1:
            print(-1)
        else:
            if X_str[-1] == '0':
                print(- int(X_str[:-1]))
            else:
                print(- (int(X_str[:-1]) + 1))
