import random
import string

# generate random password of 10 characters
# @, #, $, %, & at least one 
# at least 1 number

if __name__ == '__main__':

    result = "".join(random.choice("@#$%&"))
    result += "".join(random.choice(string.digits))
    result += "".join(random.choice(string.ascii_letters) for i in range(4))
    result += "".join(random.choice(string.printable) for i in range(4))
    
    print(result)
    
    ls = list(result)
    random.shuffle(ls)
    result = "".join(ls)
    
    print(result)
