for i in range(int(input())):
    x ,y ,z = map(int, input().split(' '))
    if(x+y+z>=6):print('yes')
    else: print('no')