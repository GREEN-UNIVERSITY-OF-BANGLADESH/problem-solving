#include <stdio.h>

int main(void) {
    int t,n,a,c;

    scanf("%d", &t);

    while (t--) {
        

        scanf("%d", &n);
c=0;
for(int i=0;i<n;i++)
{
    scanf("%d \n",&a);
    if(a>=10 && a<=60)
        c++;
    
}
  printf("%d\n",c);      
    }

    return 0;
}
