from math import sqrt, pow

n = int(input())

customer = map(int,input().split())

for i in customer:
    first = i % 6 == 0
    second = int(str(i)[-1]) % 2 == 1 and i % 3 != 0
    third = (pow(int(sqrt(i)), 2) == i) or (i % 7 != 0 and i % 2 == 0)

    if (first and second) or (second and third) or (first and third):
        if first:
            print("1", end= " ")
        else:
            print("2", end= " ")
    elif first:
        print("1", end= " ")
    elif second:
        print("2", end= " ")
    elif third:
        print("3", end= " ")
    else:
        print("0", end= " ")
