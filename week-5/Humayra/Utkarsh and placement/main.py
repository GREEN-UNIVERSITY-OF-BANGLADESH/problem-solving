for i in range(int(input())):
    a = list( input().split(' '))
    x, y = input().split(' ')
    k=a.index(x)
    l = a.index(y)
    if(k<l): print(x)
    else: print(y)