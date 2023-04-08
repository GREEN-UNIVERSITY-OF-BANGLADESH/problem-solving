#include <stdio.h>
int main(){
    int t;
    scanf("%d", &t);

    while(t--)
    {
        int sunny=0, rainy=0;
        for(int i=1; i<=7; i++)
        {
            int weather;
            scanf("%d", &weather);
            if(weather==0){
                rainy++;
            }
            else{
                sunny++;
            }
        }
        if(sunny>rainy){
            printf("Yes\n");
        }
        else{
            printf("No\n");
        }
    }
}
