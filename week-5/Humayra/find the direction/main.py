for i in range(int(input())):
    x= int(input())
    s=x%4
    if(s==1):print('East')
    elif(s==3): print('West')
    elif(s==2): print('South')
    else: print('North')