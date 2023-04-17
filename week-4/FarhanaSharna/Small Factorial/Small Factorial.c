#include <stdio.h>

int main(void) {
int t;
scanf("%d",&t);
while(t--){
    int a,i,fact=1;
    scanf("%d",&a);
    for(i=1;i<=a;i++){
        fact=fact*i;
    }
    printf("%d\n",fact);
}
	return 0;
}
