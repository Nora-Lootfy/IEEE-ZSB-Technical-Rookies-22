#!/bin/python3
#
# Complete the 'cavityMap' function below.
#
# The function is expected to return a STRING_ARRAY.
# The function accepts STRING_ARRAY grid as parameter.
#


def cavityMap(grid):
    # Write your code here
    tempgrid = []

    for i in grid:
        tempgrid.append((list(i)))

    for i in range(1, len(tempgrid) - 1):
        for j in range(1, len(tempgrid[0]) - 1):
            if tempgrid[i][j] > max(tempgrid[i - 1][j], tempgrid[i + 1][j], tempgrid[i][j - 1], tempgrid[i][j + 1]):
                tempgrid[i][j] = 'X'

    for i in range(len(tempgrid)):
        grid[i] = ''.join(tempgrid[i])
    return grid


if __name__ == '__main__':

    n = int(input())
    grid = []

    for _ in range(n):
        grid_item = input()
        grid.append(grid_item)

    result = cavityMap(grid)

    print('\n'.join(result))
