#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin>>T;

    while(T--)
    {
        int A, B, C, D, E;
        cin>>A>>B>>C>>D>>E;
        
        if (A<=E && B+C<=D)
            cout<<"YES"<<endl;
        else if (B<=E && C+A<=D)
            cout<<"YES"<<endl;
        else if (C<=E && A+B<=D)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }

    return 0;
}