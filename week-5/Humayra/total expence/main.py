for t in range(int(input())):
    x, y = map(int, input().split(' '))
    l= (x*y)-(x*y*10)/100
    if(x>1000): print(l)
    else: print(x*y)