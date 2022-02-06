#!/bin/python3
#
# Complete the 'kangaroo' function below.
#
# The function is expected to return a STRING.
# The function accepts following parameters:
#  1. INTEGER x1
#  2. INTEGER v1
#  3. INTEGER x2
#  4. INTEGER v2
#

def kangaroo(x1, v1, x2, v2):
    if v1 <= v2:
        return "NO"
    # to reach the final distance at the same time
    # if x1 + v1 * n == x2 + v2 * n
    # x2 - x1 = n (v1 - v2)
    # sholud be no reminder
    if (x2 - x1) % (v1 - v2) == 0:
        return "YES"
    else:
        return "NO"


if __name__ == '__main__':

    first_multiple_input = input().split()

    x1 = int(first_multiple_input[0])
    v1 = int(first_multiple_input[1])

    x2 = int(first_multiple_input[2])
    v2 = int(first_multiple_input[3])

    result = kangaroo(x1, v1, x2, v2)

    print(result + '\n')
