def print_list(lst):
    print(" ".join([str(i) for i in lst]))

def swap_element(lst, i, j):
    tmp = lst[i]
    lst[i] = lst[j]
    lst[j] = tmp

def bubble_sort(input_lst):
    lst = input_lst.copy()
    for i in range(len(lst) - 1):
        for j in reversed(range(i + 1, len(lst))):
            if lst[j-1][1] > lst[j][1]:
                swap_element(lst, j-1, j)
    return lst

def selection_sort(input_lst):
    lst = input_lst.copy()
    for i in range(len(lst) - 1):
        minj = i
        for j in range(i + 1, len(lst)):
            if lst[j][1] < lst[minj][1]:
                minj = j
        swap_element(lst, i, minj)
    return lst

def is_stable(lst, sorted_lst):
    n = len(lst)
    for i in range(n-1):
        for j in range(i+1, n):
            for a in range(n-1):
                for b in range(a+1, n):
                    if lst[i][1] == lst[j][1] and lst[i] == sorted_lst[b] and lst[j] == sorted_lst[a]:
                        return False
    return True


if __name__ == "__main__":
    _ = int(input())
    lst = list(map(str, input().split()))
    sorted_lst_bubble = bubble_sort(lst)
    sorted_lst_selection = selection_sort(lst)

    print_list(sorted_lst_bubble)
    if is_stable(lst, sorted_lst_bubble):
        print("Stable")
    else:
        print("Not stable")

    print_list(sorted_lst_selection)
    if is_stable(lst, sorted_lst_selection):
        print("Stable")
    else:
        print("Not stable")
