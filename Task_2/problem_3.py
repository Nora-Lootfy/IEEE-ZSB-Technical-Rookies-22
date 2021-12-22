# For every digit that the user guessed correctly in the correct place, they have a "hit"
# For every digit the user guessed correctly in the wrong place is a "miss"
import random

if __name__ == '__main__':
    n = random.randint(100, 999)
    print(n)
    numberOfTries = 1
    while(True):
        hit = 0
        miss = 0
        num = int(input())
        if num == n:
            print(numberOfTries)
            break
        numberOfTries += 1
        ls = []
        for i in range(3):
            ls.append(n % (10 ** (i + 1))// (10 ** i) == num % (10 ** (i + 1))// (10 ** i))
            if ls[i]: hit += 1
        
        if hit <= 1: #there could be miss
            for i in range(3):
                for j in range(3):
                    if n % (10 ** (i + 1)) // (10 ** i) == num % (10 ** (j + 1)) // (10 ** j) and not ls[i]:
                        miss += 1

        print(str(hit), "hit", str(miss), "miss")