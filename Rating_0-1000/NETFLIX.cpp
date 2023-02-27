#include <bits/stdc++.h>
using namespace std;

int main()
{
	int T;
	cin>>T;
	while(T--)
	{
	    int a,b,c,x;
	    cin>>a>>b>>c>>x;
	    
	    if((a+b)>=x || (b+c)>=x || (c+a)>=x)
	        cout<<"YES"<<endl;
	    else
	        cout<<"NO"<<endl;
	}
	
	return 0;
}