#include <iostream>
using namespace std;

int main() 
{
	// your code goes here
	int t;
	cin >> t;
	while (t--)
	{
	    int l, r;
	    cin >> l>> r;
	    int count=0;
	    for(int i=l; i<=r; i++)
	    {
	        if(i%10==2 || i%10==3 || i%10==9)
	        count++;
	    }
	    cout << count << "\n";
	}
	return 0;
}
