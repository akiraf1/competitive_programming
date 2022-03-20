if __name__ == "__main__":
    n = int(input())
    lst = []
    for _ in range(n):
        lst.append(list(map(int, input().split())))
    s = str(input())

    lr_each_y_points_dict = {}
    for i in range(n):
        x = lst[i][0]
        y = lst[i][1]
        if y not in lr_each_y_points_dict:
            lr_each_y_points_dict[y] = {s[i]: x}
            continue
        if s[i] not in lr_each_y_points_dict[y]:
            lr_each_y_points_dict[y][s[i]] = x
            continue
        if s[i] == "R" and x < lr_each_y_points_dict[y][s[i]]:
            lr_each_y_points_dict[y][s[i]] = x
            continue
        elif s[i] == "L" and lr_each_y_points_dict[y][s[i]] < x:
            lr_each_y_points_dict[y][s[i]] = x
            continue
        else:
            pass

    for lr_points in lr_each_y_points_dict.values():
        if "R" in lr_points and "L" in lr_points and lr_points["L"] - lr_points["R"] > 0:
            print("Yes")
            exit(0)
    print("No")

