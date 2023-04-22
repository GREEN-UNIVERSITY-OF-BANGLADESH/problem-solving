#include<iostream>
 using namespace std;
 int main()
 {
     int t;
     cin>>t;
     while(t--){
         int a[10],con=0,count=0;
         for(int i=0;i<10;i++)
         {
             cin>>a[i];
         }
         for(int i=0;i<10;i++){
             if(i%2==0)
             {
                 if(a[i]==1)
                 count++;
             }
             else
             {
                 if(a[i]==1)
                 con++;
             }
         }
         if(count>con)
         cout<<"1"<<endl;
         else if(con>count)
         cout<<"2"<<endl;
         else if(con==count)
         cout<<"0"<<endl;
     }
 }