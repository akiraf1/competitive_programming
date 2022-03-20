def forward(point, direction):
    if direction == "N":
        point[1] += 1
    elif direction == "S":
        point[1] -= 1
    elif direction == "E":
        point[0] += 1
    elif direction == "W":
        point[0] -= 1
    return point


def rotate(direction):
    rotation = {
        "N": "E",
        "E": "S",
        "S": "W",
        "W": "N"
    }
    return rotation[direction]

if __name__ == "__main__":
    n = int(input())
    t = str(input())
    point = [0, 0]
    direction = "E"
    for t_char in t:
        if t_char == "S":
            point = forward(point, direction)
        elif t_char == "R":
            direction = rotate(direction)
    print(point[0], point[1])
