import collections


if __name__ == "__main__":
    N, M = map(int, input().split())
    AB = []
    CD = []
    for i in range(0, M):
        AB.append(list(map(int, input().split())))
    for i in range(0, M):
        CD.append(list(map(int, input().split())))

    AB_counts = collections.Counter(sum(AB, [])).values()
    CD_counts = collections.Counter(sum(CD, [])).values()

    if sorted(AB_counts) == sorted(CD_counts):
        print("Yes")
    else:
        print("No")