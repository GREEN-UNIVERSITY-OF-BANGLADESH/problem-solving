#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x,y,x1,y1,d;
        cin>>x>>y>>x1>>y1>>d;
        float g ,h,day=0;
        g =float(x/x1);
        h =float(y/y1);
        if(g>h)
        day= h;
        else
        day =g;
        if(day>=d)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
    }
}