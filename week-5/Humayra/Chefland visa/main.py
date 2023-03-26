for i in range(int(input())):
    (x1,x2,y1,y2,z1,z2) = map(int, input().split(' '))
    if(x2>=x1 and y2>=y1 and z2<=z1): print('yes')
    else: print('no')