#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	scanf("%d", &t);
	while(t--)
	{
	    char a, b, c, x, y;
	    cin >>a>>b>>c>>x>>y;
	    if(a==x || a==y)
	        printf("%c\n", a);
	    else if(b==x || b==y)
	        printf("%c\n", b);
	    else if(c==x || c==y)
	        printf("%c\n", c);

	}
	return 0;
}
