for i in range(int(input())):
    (a,b,c) = map(int, input().split(' '))
    if(a+b>c):
        print('Train')
    elif(a+b==c): print('Equal')
    else: print("planebus")