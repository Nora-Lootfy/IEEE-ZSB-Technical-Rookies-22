import math

def diagonalDifference(arr):
    primary_diagonal = 0
    secondary_diagonal = 0
    for i in range(len(arr)):
        primary_diagonal += arr[i][i]
        secondary_diagonal += arr[i][len(arr) - 1- i]
    return abs(primary_diagonal - secondary_diagonal)


if __name__ == '__main__':
    
    n = int(input().strip())
    arr = []

    for _ in range(n):
        arr.append(list(map(int, input().rstrip().split())))

    result = diagonalDifference(arr)
    
    print(result)
