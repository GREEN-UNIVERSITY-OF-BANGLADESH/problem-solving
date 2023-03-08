//@jahidulzaid
#include<stdio.h>
int main(){
    int withdraw;
    float balance;
    scanf("%d",&withdraw);
    scanf("%f",&balance);
    if(withdraw%5==0)
    {
        float remainingBal;
        remainingBal=balance-(float)withdraw-0.5;
        if(remainingBal<0)
            printf("%.2f",balance);
        else
            printf("%.2f",remainingBal); 
    }
    else{
        printf("%.2f",balance);
    }
}
