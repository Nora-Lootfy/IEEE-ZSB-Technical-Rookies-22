def count_substring(string, sub_string):
    count = 0
    for s in range(0, len(string)):
        t = s
        for i in range(0, len(sub_string)):
            if(t < len(string) and sub_string[i] == string[t]):
                i += 1
                t += 1
        if  t - s == len(sub_string):
            count += 1
    return count

if __name__ == '__main__':
    string = input().strip()
    sub_string = input().strip()
    
    count = count_substring(string, sub_string)
    print(count)