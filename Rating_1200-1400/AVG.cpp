#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin>>T;
	
	while(T--)
	{
	    int n, k, v, s=0, b=0;
	    cin>>n>>k>>v;
	    int a[n];
	    for(int i=0; i<n; i++)
	    {
	        cin>>a[i];
	        s=s+a[i];
	    }
	    b=v*(n+k)-s;
	    if(b>0 && ((b%k)==0)) cout<<b/k<<endl;
	    else cout<<-1<<endl;
	}
	
	return 0
}