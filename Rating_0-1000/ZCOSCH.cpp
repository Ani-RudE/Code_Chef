#include <bits/stdc++.h>
using namespace std;

int main()
{
    int R;
    cin>>R;
        
    if (R>100)
    {
        cout<<0<<endl;
    }
    else if (R<=100 && R>=51)
    {
        cout<<50<<endl;
    }
    else if (R>=1 && R<=50)
    {
        cout<<100<<endl;
    }

    return 0;
}