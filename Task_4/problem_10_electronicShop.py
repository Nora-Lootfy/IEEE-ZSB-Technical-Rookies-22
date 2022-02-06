#!/bin/python3
#
# Complete the getMoneySpent function below.
#


def getMoneySpent(keyboards, drives, b):
    canBuy = -1
    keyboards.sort()
    drives.sort()
    for i in keyboards:
        for j in drives:
            if i + j <= b and i + j > canBuy:
                canBuy = i + j

    return canBuy


if __name__ == '__main__':

    bnm = input().split()

    b = int(bnm[0])
    n = int(bnm[1])
    m = int(bnm[2])

    keyboards = list(map(int, input().split()))
    drives = list(map(int, input().split()))

    #
    # The maximum amount of money she can spend on a keyboard and USB drive, or -1 if she can't purchase both items
    #

    moneySpent = getMoneySpent(keyboards, drives, b)

    print(str(moneySpent) + '\n')
