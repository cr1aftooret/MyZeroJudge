option = "AHIMOTUVWXY"

def computer(str : str) -> bool :
    notHave = False

    for i in str:
        if i not in option:
            notHave = True
    
    if(notHave):
        return False

    if str != str[::-1] :
        return False

    return True

if(computer(input())):
    print("Yes")
else:
    print("No")