#include <stdio.h>

int main(void) {
	// your code goes here
	int t, x, y ;
	scanf("%d", &t) ;
	for (int i = 1; i<=t ;i++) {
	    scanf("%d %d", &x, &y) ;
	  if (x>10*y){
	      printf("YES\n") ;
	      
	  }  
	  else 
	  printf("NO\n") ;
	
	}
	return 0;
}

