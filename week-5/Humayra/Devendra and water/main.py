for i in range(int(input())):
    (z,y,a,b,c) = map(int, input().split(' '))
    k=y+a+b+c
    l={k:'No', z:'yes'}
    print(l[max(k,z)])