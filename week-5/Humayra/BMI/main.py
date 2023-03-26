for i in range(int(input())):
    (m,h) = map(int, input().split(' '))
    k=m/(h**2)
    if(k<=18): print(1)
    elif(k<=24): print(2)
    elif(k<=29):print(3)
    else: print(4)