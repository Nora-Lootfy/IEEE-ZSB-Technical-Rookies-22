if __name__ == '__main__':
    str = input()
    n = int(input())
    countR = 0
    
    countR = str.count('r')
    countR += str.count('R')

    countR *= n // len(str)

    for i in range(n % len(str)):
        if str[i] == 'r' or str[i] == 'R':
            countR += 1
    

    print(countR)