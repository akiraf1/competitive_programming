def is_prime(num):
    for i in range(2, int(num**0.5) + 1):
        if num % i == 0:
            return False
    return True


if __name__ == "__main__":
    n = int(input())
    count = 0
    for i in range(n):
        if is_prime(int(input())):
            count += 1
    print(count)
