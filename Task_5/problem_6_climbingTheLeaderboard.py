def climbingLeaderboard(ranked, players):
    result = []
    r = sorted(list(set(ranked)), reverse=True)
    # print(r)
    index = len(r) - 1

    for i in range(len(players)):
        for j in range(index, -1, -1):
            if(r[j] > players[i]):
                result.append(j + 2)
                index = j
                break
            if j == 0:
                result.append(1)

    return result


if __name__ == '__main__':

    count_r = int(input())
    ranked = list(map(int, input().split()))

    count_p = int(input())
    players = list(map(int, input().split()))

    result = climbingLeaderboard(ranked, players)

    for i in result:
        print(i)
