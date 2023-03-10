 #include <iostream>
using namespace std;

int main()
{
    // your code goes here
    int i,t,n,j;

    cin>>t;

    while(t--){
        cin>>n;
        int s[n],d[n];
        for(i=0; i<n; i++)
        {
            cin>>s[i];

        }
        for(i=0; i<n; i++)
        {
            cin>>d[i];

        }
        for(i=0; i<n; i++)
        {
            if(s[i]==d[i])
                j++;
        }
        cout<<j<<endl;
        j=0;
    }
    return 0;
}
