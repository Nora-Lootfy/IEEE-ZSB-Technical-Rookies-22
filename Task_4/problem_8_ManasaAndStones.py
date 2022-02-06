#!/bin/python3
#
# Complete the 'stones' function below.
#
# The function is expected to return an INTEGER_ARRAY.
# The function accepts following parameters:
#  1. INTEGER n
#  2. INTEGER a
#  3. INTEGER b
#


def stones(n, a, b):
    # Write your code here
    permutations = []
    permutations.append(a * (n - 1))
    for i in range(n - 1):
        permutations.append(a * (n - 2 - i) + b * (i + 1))
    return sorted(set(permutations))


if __name__ == '__main__':

    T = int(input())

    for T_itr in range(T):
        n = int(input().strip())
        a = int(input().strip())
        b = int(input().strip())

        result = stones(n, a, b)

        print(' '.join(map(str, result)))
