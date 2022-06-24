

def calc_time(s, num):
    idx_list = sorted([s_i.index(num) for s_i in s])

    while(len(idx_list) > 0):
        t = max(idx_list)
        for ele in set(idx_list):
            idx_list.remove(ele)
        idx_list = list(map(lambda x: x+10, idx_list))
    return t

if __name__ == "__main__":
    n = int(input())
    s = []
    for i in range(n):
        s_i_str = list(str(input()))
        s.append(list(map(int, s_i_str)))

    min_time = n * 10 # これを超えることはない
    for num in range(10):
        min_time = min(min_time, calc_time(s, num))
    print(min_time)
