#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while(t--){
        int n, eligible=0;
        scanf("%d", &n);
        int arr[n];
        for(int i=0; i<n; i++){
            scanf("%d", &arr[i]);
            if(arr[i]>=10 && arr[i]<=60){
                eligible++;
            }
        }
        printf("%d\n", eligible);
    }

    return 0;
}
