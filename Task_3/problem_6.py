if __name__ == '__main__':
    number = int(input("Enter the number: "))
    num1 = 0
    num2 = 0
    count = 0
    s = []
    
    while(number != 6174):
        num1 = 0
        num2 = 0
        s.clear()
        
        count += 1
        # s = list(map(int, str(number)))
        num = number
        for i in range(4):
            if(num != 0):
                s.append(num % 10)
                num //= 10
            else:
                s.append(0)

        descending = sorted(s, reverse=True)

        for i in range(4):
            num1 += descending[i] * 10**(3 - i)

        ascending = sorted(s)

        for i in range(len(ascending)):
            num2 += ascending[i] * 10**(3 - i)

        number = num1 - num2
    
    print(count)
