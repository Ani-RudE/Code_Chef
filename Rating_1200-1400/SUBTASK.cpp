#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin>>T;

    while(T--)
    {
        int N, M, K;
        cin>>N>>M>>K;
        int a[N];
        
        int x=0, y=0;
        for (int i=0; i<N; i++)
        {
            cin>>a[i];
            if (a[i]==1)
                x+=1;
                if (i+1<=M && a[i]==1)
                    y+=1;
        }
        
        if (x==N)
            cout<<100<<endl;
        else if (y==M && x<N)
            cout<<K<<endl;
        else
            cout<<0<<endl;
    }

    return 0;
}