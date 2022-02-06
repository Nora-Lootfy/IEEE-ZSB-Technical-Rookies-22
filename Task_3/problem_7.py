#!/bin/python3

#
# Complete the 'migratoryBirds' function below.
#
# The function is expected to return an INTEGER.
# The function accepts INTEGER_ARRAY arr as parameter.
#

def migratoryBirds(arr):
    types = [0, 0, 0, 0, 0]
    for i in arr:
        types[i - 1] += 1
    maxNum = 0

    for i in range(len(types)):
        if maxNum < types[i]:
            indexOfMax = i
            maxNum = types[i]
    return indexOfMax + 1


if __name__ == '__main__':

    arr_count = int(input())
    arr = list(map(int, input().split()))

    result = migratoryBirds(arr)

    print(str(result) + '\n')
