#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin>>T;

    while(T--)
    {
        long X, Y;
        cin>>X>>Y;

        long a, b;
        if (X%10!=0)
        {
            a=X%10;
            X=X+(10-a);
        }
        if (Y%10!=0)
        {
            b=Y%10;
            Y=Y+(10-b);
        }

        long temp=(abs(X-Y))/10;
        cout<<temp<<endl;
    }

    return 0;
}