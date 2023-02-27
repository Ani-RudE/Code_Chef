#include <bits/stdc++.h>
using namespace std;

int main()
{
	int T;
	cin>>T;
	while(T--)
	{
	    int n,m,k;
	    cin>>n>>m>>k;
	    int s=m-k;
	    if(n<=s)
	    {
	        cout<<"Yes"<<endl;
	    }
	    else
	    {
	        cout<<"No"<<endl;
	    }
	}
	
	return 0;
}