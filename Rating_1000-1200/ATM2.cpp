#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin>>T;

    while(T--)
    {
        int n, k;
        cin>>n>>k;
        int a[n];
        
        for (int i=0; i<n; i++)
        {
            cin>>a[i];
        }
        
        for (int i=0; i<n; i++)
        {
            if (a[i]<=k)
            {
                k=k-a[i];
                cout<<"1";
            }
            else
            {
                cout<<"0";
            }
        }
        
        cout<<endl;
    }

    return 0;
}