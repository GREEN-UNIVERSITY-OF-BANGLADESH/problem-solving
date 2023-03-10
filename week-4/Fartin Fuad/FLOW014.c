#include <stdio.h>

int main(void) {
	// your code goes here
	int t;
	scanf("%d", &t);
	while(t--)
	{
	    float hard, carbon, tensil;
	    int arr[3]={0, 0, 0};
	    scanf("%f%f%f", &hard, &carbon, &tensil);
	    if(hard>50)
        {
            //printf("Hard true\n");
	        arr[0]=1;
        }
	    if(carbon<0.7)
        {
            //printf("Carbon true\n");
	        arr[1]=1;
	        //printf("Arr[1]=%d\n", arr[1]);

        }
	    if(tensil>5600)
        {
            //printf("Tensil true\n");
	        arr[2]=1;

        }
	   if(arr[0]==1)
	   {
	       if(arr[1]==1)
	       {
	           if(arr[2]==1)
	                printf("10\n");
	           else
	                printf("9\n");
	       }
	       else if(arr[2]==1)
	            printf("7\n");
	       else
	            printf("6\n");
	   }
	   else
	   {
	       if(arr[1]==1)
	       {
	           if(arr[2]==1)
                    printf("8\n");
                else
                    printf("6\n");
	       }
	       else if(arr[2]==1)
	            printf("6\n");
	       else
	            printf("5\n");
	   }
	}
	return 0;
}

