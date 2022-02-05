if __name__ == "__main__":
    H, W = map(int, input().split())

    B = []
    for i in range(0, H):
        row = list(map(int, input().split()))
        for j in range(0, W):
            if i == 0:
                B.append([])
            B[j].append(row[j])

    for i in range(0, W):
        print(" ".join(list(map(str, B[i]))))
