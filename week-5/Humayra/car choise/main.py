for t in range(int(input())):
    (a,b,c,d) = map (int, input().split(' '))
    x=c/a
    y=d/b
    if(x==y): print(0)
    elif(x>y): print(1)
    else: print(-1)