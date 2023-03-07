#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin>>T;

    while(T--)
    {
        long long int N, x=0;
        cin>>N;
        long long int a[N];
        
        for (long long i=0; i<N; i++)
        {
            cin>>a[i];
            x+=a[i];
        }
        
        if (((x-x/2)-(x/2))==1)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }

    return 0;
}