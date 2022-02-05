if __name__ == "__main__":
    S = str(input())
    T = str(input())
    shift = ord(T[0]) - ord(S[0])
    ok = True
    for idx, s_char in enumerate(S):
        shifted_id = ord(s_char) + shift
        if shifted_id > 122: # zを超える
            shifted_id = 96 + (shifted_id - 122)
        elif shifted_id < 97: # aより小さい
            shifted_id = 123 + (shifted_id - 97)
        if chr(shifted_id) != T[idx]:
            ok = False
            break

    if ok:
        print("Yes")
    else:
        print("No")