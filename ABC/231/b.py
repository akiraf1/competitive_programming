if __name__ == "__main__":
    N = int(input())
    person = {}
    for i in range(0, N):
        S = str(input())
        if S not in person:
            person[S] = 1
        else:
            person[S] += 1
    print(max(person, key=person.get))