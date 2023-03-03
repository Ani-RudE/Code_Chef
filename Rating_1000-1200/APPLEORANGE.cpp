#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b)
{
	int x=min(a, b);
	while (x>0)
	{
		if (a%x==0 && b%x==0)
		    break;
		
		x--;
	}
	
	return x;
}

int main()
{
    int T;
    cin>>T;

    while(T--)
    {
        int N, M;
        cin>>N>>M;
        
        cout<<gcd(N,M)<<endl;
    }

    return 0;
}