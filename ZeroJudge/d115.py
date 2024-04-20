from itertools import combinations

while True:
    data = list(map(int,input().split()))
    if data[0] == 0: 
        break

    for i in combinations(sorted(data[1:-1]), data[-1]):
        print(*i)