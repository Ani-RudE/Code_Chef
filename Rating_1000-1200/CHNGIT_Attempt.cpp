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
          int a[n];
          int b[n];
        
          for (int i=0; i<n; i++)
          {
               cin>>a[i];
          }
        
          for (int i=0; i<n; i++)
          {   
               int x=1;
               for (int j=i+1; j<n; j++)
               {
                    if (a[i]==a[j])
                         x=+1;
               }
            
               b[i]=x;
          }
        
          sort(b,b+n);

          for (int i=0; i<n; i++)
               cout<<b[i]<<" ";
          cout<<endl;
        
          cout<<n-b[n-1]<<endl;
     }

     return 0;
}