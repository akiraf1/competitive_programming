if __name__ == "__main__":
    n = int(input())
    print(1)
    numbers = {i for i in range(1, 2*n+2)}
    appeared_numbers = {1}
    for _ in range(n):
        appeared_numbers.add(int(input()))
        res = list(numbers - appeared_numbers)[0]
        appeared_numbers.add(res)
        print(res)
