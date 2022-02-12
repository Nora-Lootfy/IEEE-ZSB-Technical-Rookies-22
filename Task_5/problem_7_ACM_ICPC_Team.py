def acmTeam(topic):

    maxKnownTopic = 0
    teamTopics = []
    teamNo = 0

    for i in range(len(topic)):
        for j in range(i + 1, len(topic)):

            knownTopic = bin(int(topic[i], 2) | int(topic[j], 2)).count('1')
            teamTopics.append(knownTopic)
            if(knownTopic > maxKnownTopic):
                maxKnownTopic = knownTopic

    teamNo = teamTopics.count(maxKnownTopic)

    return maxKnownTopic, teamNo


if __name__ == '__main__':

    n, m = map(int, input().split())
    topics = []

    for _ in range(n):
        topic = input()
        topics.append(topic)

    result = acmTeam(topics)

    print(result[0])
    print(result[1])
