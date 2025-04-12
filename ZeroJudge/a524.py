from sys import stdin
from itertools import permutations

for input in stdin:
    input = input.strip()
    if(input) : 
        n = int(input)
        list_n = list(i for i in range(1, n+1))
        for item in sorted(list(permutations(list_n)), reverse= True):
            for i in item:
                print(i, end = "")
            print()