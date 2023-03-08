#include <stdio.h>

int main(void) {

int t,i;
scanf("%d",&t);
for(i=1;i<=t;i++){
    int n,m,k;
  scanf("%d%d%d",&n,&m,&k);
    if(m-k>=n)
        printf("YES\n");
        else
        printf("NO\n");
}
	return 0;
}

