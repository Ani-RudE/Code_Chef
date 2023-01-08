#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin>>T;

    while(T--)
    {
        long N, X;
        cin>>N>>X;
        
        if (N>X)
        {
            if (((N-X)%4)==0)
                cout<<(N-X)/4<<endl;
            else
                cout<<((N-X)/4)+1<<endl;
        }
        else
        {
            cout<<0<<endl;
        }
    }

    return 0;
}