from collections import Counter

print(*[i for i, j in Counter(input().split()).items() if j % 3 != 0])