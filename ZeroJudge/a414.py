from sys import stdin

for input in stdin:
    n = bin(int(input))
    if(n == bin(0)) : break
    tmp = 0
    
    for i in n[::-1]:
        if i == "1": tmp += 1
        else : break
    print(tmp)