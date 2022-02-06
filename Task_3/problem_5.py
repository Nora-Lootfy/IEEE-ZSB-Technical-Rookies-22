#!/bin/python3

#
# Complete the 'breakingRecords' function below.
#
# The function is expected to return an INTEGER_ARRAY.
# The function accepts INTEGER_ARRAY scores as parameter.
#

def breakingRecords(scores):
    # Write your code here
    firstScore = scores[0]
    lowestScore = firstScore
    highestScore = firstScore
    result = [0, 0]  # highest then lowest

    for i in range(1, len(scores)):

        if lowestScore > scores[i]:
            lowestScore = scores[i]
            result[1] += 1

        if highestScore < scores[i]:
            highestScore = scores[i]
            result[0] += 1

    return result


if __name__ == '__main__':

    n = int(input())
    scores = list(map(int, input().split()))

    result = breakingRecords(scores)

    print(' '.join(map(str, result)))
    print('\n')
