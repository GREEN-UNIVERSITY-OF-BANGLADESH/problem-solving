for i in range(int(input())):
    k= int(input())
    l=0
    for j in range(1,k+1):
        if(j%2==0): l=l-1
        else: l=l+3
    print(l)