#include <bits/stdc++.h>
using namespace std;

int main()
{
	int T;
	cin>>T;

	while(T--)
     {
          int N;
	     cin>>N;
	     int a[2*N];

	     for(int i=0;i<2*N;i++)
          {
               cin>>a[i];
	     }
          
	     int k=0;
	     int m=0;
	     for(int i=0;i<2*N;i++)
          {
               for(int j=0;j<2*N;j++)
               {
                    if(a[i]==a[j])
	                    k++;
	          }

	          if(k>=3)
               {
	               cout<<"NO"<<endl;
	               m++;
	               break;
               }
               
               k=0;
	     }
	     
          if(m==0)
	        cout<<"YES"<<endl;
	}

	return 0;
}