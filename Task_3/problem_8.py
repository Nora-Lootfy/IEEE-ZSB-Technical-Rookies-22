#!/bin/python3

import math

#
# Complete the 'sockMerchant' function below.
#
# The function is expected to return an INTEGER.
# The function accepts following parameters:
#  1. INTEGER n
#  2. INTEGER_ARRAY ar
#


def sockMerchant(n, ar):
    # Write your code here
    n = 0
    arr = [0] * 100
    for i in ar:
        arr[i - 1] += 0.5
    for i in range(100):
        n += math.floor(arr[i])
    return n


if __name__ == '__main__':

    n = int(input())
    ar = list(map(int, input().split()))

    result = sockMerchant(n, ar)

    print(str(result) + '\n')
