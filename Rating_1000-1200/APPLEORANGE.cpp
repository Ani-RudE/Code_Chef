#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin>>T;

    while(T--)
    {
        int N, M;
        cin>>N>>M;
        
        // int x=min(N, M);
        // while (x>0)
        // {
        //     if (N%x==0 && M%x==0)
        //         break;
            
        //     x--;
        // }
        
        cout<<__gcd(N,M)<<endl;
    }

    return 0;
}