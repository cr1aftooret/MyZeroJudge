while(True):
    try:
        n = int(input())
        
        fn = ((1 + n) * n ) // 2
        gn = 0
        for i in range(1, n + 1):
            gn += ((1 + i) * i ) // 2 
        print(fn, gn)
    except EOFError:
        break