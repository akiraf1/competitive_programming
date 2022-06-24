if __name__ == "__main__":
    h1, h2, h3, w1, w2, w3 = map(int, input().split())

    count = 0
    for v11 in range(1, 29):
        for v21 in range(1, 29):
            v31 = w1 - v11 - v21
            if v31 < 1 or v31 > 28:
                continue
            for v12 in range(1, 29):
                for v22 in range(1, 29):
                    v32 = w2 - v12 - v22
                    if v32 < 1 or v32 > 28:
                        continue
                    v13 = h1 - v11 - v12
                    v23 = h2 - v21 - v22
                    v33 = h3 - v31 - v32
                    if v13 < 1 or v13 > 28 or v23 < 1 or v23 > 28 or v33 < 1 or v33 > 28 or v13 + v23 + v33 != w3:
                        continue
                    count += 1

    print(count)
