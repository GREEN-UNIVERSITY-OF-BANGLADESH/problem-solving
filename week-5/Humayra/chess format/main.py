for i in range(int(input())):
    (a,b) = map(int, input().split(' '))
    k=a+b
    if(k<3): print(1)
    elif(k>=3 and k<=10): print(2)
    elif(k<=60): print(3)
    else: print(4)