N = int(input())
num = list(map(int, input().split()))

dic = dict()
for i in sorted(num):
    if i in dic:
        dic[i] += 1
    else:
        dic[i] = 1

max_count = max(dic.values())

for key, value in dic.items():
    if value == max_count:
        print(key, value)