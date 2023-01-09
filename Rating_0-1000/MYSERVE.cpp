#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin>>T;

    while(T--)
    {
        int p, q;
        cin>>p>>q;
        
        // if (p+q==0)
        // {
        //     cout<<"ALICE"<<endl;
        // }
        if ((p+q)%4==0 || (p+q)%4==1)
        {
            cout<<"ALICE"<<endl;
        }
        else
        {
            cout<<"BOB"<<endl;
        }
    }

    return 0;
}