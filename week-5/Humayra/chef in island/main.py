for t in range(int (input())):
    (a,b,c,f,k) = map(int, input().split(' '))
    D=min(a/c,b/f)
    if(D>=k): print('yes')
    else: print('no')
    