#!/bin/python3

import math

#
# Complete the 'pageCount' function below.
#
# The function is expected to return an INTEGER.
# The function accepts following parameters:
#  1. INTEGER n
#  2. INTEGER p
#


def pageCount(n, p):
    # Write your code here
    if n == p:
        return 0

    if n % 2 != 0:
        n -= 1
    if p % 2 != 0:
        p -= 1

    return min(abs(n - p)//2, p//2)


if __name__ == '__main__':

    n = int(input())
    p = int(input())

    result = pageCount(n, p)

    print(result)
