#!/bin/python3

import math
import os
import random
import re
import sys

#
# Complete the 'countingValleys' function below.
#
# The function is expected to return an INTEGER.
# The function accepts following parameters:
#  1. INTEGER steps
#  2. STRING path
#

def countingValleys(steps, path):
    # Write your code here
    positionWRTSeaLevel = 0
    location = 0 # -1 for valley, 0 for sea level, 1 for mountain
    countValleys = 0
    for i in path:
        if i == "D":
            positionWRTSeaLevel -= 1
        else:
            positionWRTSeaLevel += 1
        
        if location == 0 and positionWRTSeaLevel == -1:
            countValleys += 1
            location = -1
            
        if positionWRTSeaLevel == 0:
            location = 0
            
        if positionWRTSeaLevel > 0:
            location = 1
    return countValleys
        

if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    steps = int(input().strip())

    path = input()

    result = countingValleys(steps, path)

    fptr.write(str(result) + '\n')

    fptr.close()
