#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i=0; i<n; i++)
        scanf("%d", &arr[i]);
    int countEven=0;
    int countOdd=0;
    for(int i=0; i<n; i++)
    {
        if(arr[i]%2==0)
            countEven++;
        else
            countOdd++;
    }
        (countEven>countOdd)?printf("READY FOR BATTLE\n"):printf("NOT READY\n");
}
