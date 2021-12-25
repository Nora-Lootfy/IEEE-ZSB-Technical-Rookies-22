#!/bin/python3
import math
import os
import random
import re
import sys

#
# Complete the 'getTotalX' function below.
#
# The function is expected to return an INTEGER.
# The function accepts following parameters:
#  1. INTEGER_ARRAY a
#  2. INTEGER_ARRAY b
#
def primeCheck(n):
    if n==1 or n==0 or (n % 2 == 0 and n > 2):
        return False
    else:
        if math.sqrt(n) % 1 == 0:
            return False
        for i in range(2, math.floor(math.sqrt(n)) + 1):
            if n % i == 0:
                return False
    return True
    
def getTotalX(a, b):
    a.sort(reverse=True)
    b.sort()
    startNumber = a[0]
    count = 0
    
    for i in range(1, len(a)):
        if startNumber % a[i] != 0:
            s = math.floor(math.sqrt(startNumber))
            if a[i] % s == 0: 
                startNumber *= a[i] /s
            else:
                startNumber *= a[i]
    
    temp = startNumber
    
    if len(a) > 1:
        for multiplier in range (2, int(b[0]/temp) + 1):
            startNumber = temp
            if not primeCheck(multiplier):
                continue
            if multiplier != 2:
                startNumber *= multiplier
            while startNumber <= b[0]:
                isDivisble = True
                for i in b:
                    if i % startNumber != 0:
                        isDivisble = False
                        break
                if isDivisble:
                    count += 1
                startNumber *= multiplier
        
    else: 
        while startNumber <= b[0]:
            isDivisble = True
            for i in b:
                if i % startNumber != 0:
                    isDivisble = False
                    break
            if isDivisble:
                count += 1
            startNumber += a[0]
    return count

if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    first_multiple_input = input().rstrip().split()

    n = int(first_multiple_input[0])

    m = int(first_multiple_input[1])

    arr = list(map(int, input().rstrip().split()))

    brr = list(map(int, input().rstrip().split()))

    total = getTotalX(arr, brr)

    fptr.write(str(total) + '\n')

    fptr.close()
