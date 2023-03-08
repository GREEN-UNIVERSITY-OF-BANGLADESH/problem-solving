import java.util.*;
import java.lang.*;
import java.io.*;

class codechef{
public static void main(String args[]) {


Scanner sc = new Scanner(System.in);

int n = sc.nextInt();
 for(int i=0;i<n;i++)
 {
int reverse = 0 ;
int a = sc.nextInt(); 
 
while(a>0)
{
   int rem = a % 10;  
    reverse=reverse*10 + rem;  
    a = a/10; 
}
System.out.println(reverse);

 }



}


}

