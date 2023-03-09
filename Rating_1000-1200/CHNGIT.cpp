#include <bits/stdc++.h>
using namespace std;

int main()
{    
     int T;
     cin>>T;
     
	while (T--)
	{
          int n;
	     cin>>n;
	     int a[n];
	    
	     for(int j=0; j<n; j++)
               cin>>a[j];
        
          int count[101]{0};
         
          for(int j=0; j<n; j++)
          {
               count[a[j]]++;
          }
          
          int max=0;
        
          for(int j=0; j<n; j++)
          {
               if(count[a[j]]>count[a[max]])
               max=j;
          }

          cout<<n-count[a[max]]<<endl;
	}

	return 0;
}