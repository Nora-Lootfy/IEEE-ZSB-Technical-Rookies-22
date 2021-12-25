#what is given "2 space separated integers" the first integer is the occupied volume 
# explanation if the given the remaining volume
# 3
# 6 6  --> 0 the bottle is empty
# 8 10 --> 2
# 9 12 --> 3

if __name__ == '__main__':
    remainingVolume = []
    capacity = []
    n = int(input())
    
    for i in range(n):
        r, c = map(int, input().split())
        remainingVolume.append(r)
        capacity.append(c)

    #sum all occupied volume
    #sort the capacity descendaning
    #adding the capacity of first two..
    #compare between them
    
    occupiedVolume = sum(remainingVolume)
    result = occupiedVolume <= sorted(capacity, reverse=True)[0] + sorted(capacity, reverse=True)[1]

    if(result):
        print("Yes")
    else:
        print("NO")