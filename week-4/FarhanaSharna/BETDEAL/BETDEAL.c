#include <stdio.h>

int main(void) {
    int t;

    scanf("%d", &t);

    while (t--) {
        int a, b;

        scanf("%d %d", &a, &b);

        int p1 =100-(100*a)/100;
      int  p2=200-(200*b)/100;
        if (p1 < p2) {
            printf("FRIST\n");
        } else if (p2 < p1) {
            printf("SEC\n");
        } else {
            printf("BOTH\n");
        }
    }

    return 0;
}


