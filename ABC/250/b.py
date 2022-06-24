def print_tile_row(N, B, start_is_odd):
    row = ""
    is_odd = start_is_odd
    for i in range(N):
        for j in range(B):
            if is_odd:
                row += "."
            else:
                row += "#"
        is_odd = not is_odd
    print(row)


def print_row(N, A, B, start_is_odd):
    for i in range(A):
        print_tile_row(N, B, start_is_odd)


def print_all(N, A, B):
    start_is_odd = True
    for i in range(N):
        print_row(N, A, B, start_is_odd)
        start_is_odd = not start_is_odd


if __name__ == "__main__":
    N, A, B = map(int, input().split())
    print_all(N, A, B)
