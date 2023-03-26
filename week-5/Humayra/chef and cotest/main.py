for t in range(int(input())):
    (a,b, c,f) = map(int, input().split(' '))
    k = a+c*10
    k2 =b+f*10
    if(k>k2): print('Chefina')
    elif(k==k2): print('Draw')
    else: print('Chef') 