if __name__ == '__main__':
    n = int(input())
    arr = list(map(int, input().split()))
    arr2 = arr.copy()
    maxNumber = max(arr)
    runnerUp = -200
    for number in arr:
        if number < maxNumber and number > runnerUp:
            runnerUp = number
    print(runnerUp)
    #another solution
    arr2 = sorted(list(set(arr)))
    print(arr2[len(arr2) - 2])