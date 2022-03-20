def knight_points(x, y):
    points = [
        [x+1, y+2],
        [x+1, y-2],
        [x-1, y+2],
        [x-1, y-2],
        [x+2, y+1],
        [x+2, y-1],
        [x-2, y+1],
        [x-2, y-1],
    ]
    return points


if __name__ == "__main__":
    x1, y1, x2, y2 = map(int, input().split())
    p1_knight_points = knight_points(x1, y1)
    p2_knight_points = knight_points(x2, y2)
    exist = False
    for point in p1_knight_points:
        if point in p2_knight_points:
            exist = True
    if exist:
        print("Yes")
    else:
        print("No")
