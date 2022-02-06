#To find the minimum distance between two similar numbers
#if there is no similar numbers, it will print the largest index

if __name__ == '__main__':

    numbers = list(map(int, input().split()))

    minDistance = len(numbers) - 1
    index = len(numbers) - 1

    for i in range(len(numbers)):
        for j in range(i + 1, index + 1):
            if numbers[i] == numbers[j]:
                minDistance = j - i
                index = j
                break

    print(minDistance)
