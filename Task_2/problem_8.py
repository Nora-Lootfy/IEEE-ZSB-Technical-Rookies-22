if __name__ == '__main__':
    #create a dictionary key, value
    dictionary = {}
    
    for _ in range(int(input())):
        name = input()
        score = float(input())
        dictionary[name] = score

    #Add all values to a list
    ls = sorted(list(set(dictionary.values())))
    #print(ls[1])
    secondOne = ls[1]
    names = []
    for key in dictionary.keys():
        if secondOne == dictionary[key]:
            names.append(key)
    names.sort()
    for i in names:
        print(i)




