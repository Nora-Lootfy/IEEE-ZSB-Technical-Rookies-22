def buildMaxHeap(numbers):
    for i in range(len(numbers)//2, -1, -1):
        maxHeap(numbers, i)


def maxHeap(numbers, parent):
    largest = parent
    left = parent * 2 + 1
    right = left + 1

    if left < len(numbers) and numbers[left] > numbers[largest]:
        # make left is the largest
        largest = left

    if right < len(numbers) and numbers[right] > numbers[largest]:
        # make left is the largest
        largest = right

    if largest != parent:
        # swap two values between parent and largest
        # numbers[parent] --> x
        # numbers[largest] --> y
        numbers[largest] += numbers[parent]
        # numbers[largest] = x + y
        numbers[parent] = numbers[largest] - numbers[parent]
        # numbers[parent] = x + y - x = y
        numbers[largest] -= numbers[parent]
        # numbers[largest] = x + y - y = x

        # check after swaping that the max heap is still valid
        maxHeap(numbers, largest)


if __name__ == '__main__':
    # ask the user to enter a set of numbers
    numbers = list(map(int, input().split()))

    # numbers before buliding max heap
    print("Numbers befor building max heap >>")
    print(numbers)

    buildMaxHeap(numbers)

    # numbers after buliding max heap
    print("Numbers after building max heap >>")
    print(numbers)
