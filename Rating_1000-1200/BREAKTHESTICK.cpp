#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int T;
    cin>>T;

    while(T--)
    {
        long long int n, x, c=-1;
        cin>>n>>x;

        for (long long int i=0; i<n; i++)
        {
            long long int a=i, b=n-i;
            if ((a==x && a%2!=0 && b%2!=0) || (b==x && a%2!=0 && b%2!=0))
            {
                cout<<"YES"<<endl;
                c=1;
                break;
            }
        }
        
        if (c!=1)
        {
            cout<<"NO"<<endl;
        }
    }

    return 0;
}