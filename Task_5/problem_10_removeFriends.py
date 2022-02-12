def deleteFriend(ls, count):
    temp = []

    for i in ls:
        # print(bool(temp))
        # check if the list is not empty
        while temp and temp[-1] < i and count > 0:
            temp.pop()
            count -= 1

        temp.append(i)

    print(" ".join(map(str, temp)))


if __name__ == '__main__':

    for _ in range(int(input())):
        friendNo, removingCount = map(int, input().split())
        listOfFriends = list(map(int, input().split()))
        deleteFriend(listOfFriends, removingCount)
