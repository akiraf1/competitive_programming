def culc_boundary(sorted_list, search_value):
    left_index: int = 0
    right_index: int = len(sorted_list) - 1

    while left_index + 1 < right_index:
        middle_index: int = (left_index + right_index) // 2
        middle_value: int = sorted_list[middle_index]

        if search_value < middle_value:
            right_index = middle_index
            continue
        if search_value > middle_value:
            left_index = middle_index
            continue

        return middle_index
    
    if sorted_list[left_index] < search_value and search_value <= sorted_list[right_index]:
        return right_index
    elif search_value <= sorted_list[left_index]:
        return left_index
    else:
        return right_index + 1


if __name__ == "__main__":
    N, Q = map(int, input().split())
    height_list = sorted(list(map(int, input().split())))
    for i in range(0, Q):
        x = int(input())
        boundary_idx = culc_boundary(height_list, x)
        print(N - boundary_idx)
