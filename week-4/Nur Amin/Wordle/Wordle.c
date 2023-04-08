#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while(t--){
        char s[6],t[6] ,m[6];
        scanf("%s %s", s, t);
        for(int i=0; i<5; i++){
                if(s[i]==t[i]){
                    printf("G");
                }
                else{
                    printf("B");
                }

        }
         printf("\n");
    }
    return 0;
}

