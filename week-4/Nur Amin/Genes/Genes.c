#include <stdio.h>
int main()
{
    char c1,c2;
    scanf("%c %c", &c1, &c2);
    if(c1=='R' || c2=='R'){
        printf("R\n");
    }
    else if(c1=='B' ||c2=='B'){
        printf("B\n");
    }
    else{
        printf("G\n");
    }
}
