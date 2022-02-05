if __name__ == "__main__":
    N = int(input())

    positions = [0]
    degree_total = 0
    for degree in list(map(int, input().split())):
        degree_total += degree
        positions.append(degree_total % 360)
    positions = sorted(positions)
    # print(positions)
    angles = []
    for i in range(0, len(positions)):
        if i == 0:
            angles.append(360 - positions[-1] + positions[0])
        else:
            angles.append(positions[i] - positions[i-1])
    # print(angles)
    print(max(angles))

