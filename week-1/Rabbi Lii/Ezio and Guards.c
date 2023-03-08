//Ezio and Guards problem .
#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while(t--)
    {
        int x,y;
        scanf("%d %d", &x, &y);

        if(x>=y)
            printf("\nYES");
        else
            printf("\nNO");
    }
    return 0;
}
