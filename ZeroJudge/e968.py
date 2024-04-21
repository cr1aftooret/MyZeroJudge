N = int(input())
a = list(map(int,input().split()))
for i in range(N, 0, -1):
    if i not in a:
        print(f"No. {i}")