#include <bits/stdc++.h>
using namespace std;

int main()
{
	int T;
	cin>>T;
	
	while(T--)
	{
        int n;
	    cin>>n;

        for(int i=1; i<=n; i++)
        {
            if(i>1 && i<n)
            {
                cout<<"0";
            }
            else
            {
                cout<<"1";
            }
        }
        
        cout<<endl;
	}
	
	return 0;
}