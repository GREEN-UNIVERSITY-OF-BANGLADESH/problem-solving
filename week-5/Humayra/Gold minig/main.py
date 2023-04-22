for i in range(int(input())):
    (x, y ,z) = map(int, input().split(' '))
    if(x*z+z)>= y: print("yes")
    else: print('no')