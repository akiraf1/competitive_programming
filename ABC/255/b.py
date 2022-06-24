import math
from pprint import pprint as pp


def distance(x1, x2):
    return math.sqrt((x1[0] - x2[0])**2 + (x1[1] - x2[1])**2)


if __name__ == "__main__":
    n, k = map(int, input().split())
    a = map(int, input().split())
    a = [i-1 for i in a]
    x = []
    for i in range(n):
        x.append(list(map(int, input().split())))

    dists = []
    for i in range(n):
        if i in a:
            continue

        # print(i+1)
        dists_j = []
        for j in a:
            dist_j = distance(x[i], x[j])
            # print(f"  compare {i+1}, {j+1}, dist: {dist_j}")
            dists_j.append(dist_j)
        dists.append(min(dists_j))

    # pp(dists)

    print(max(dists))

