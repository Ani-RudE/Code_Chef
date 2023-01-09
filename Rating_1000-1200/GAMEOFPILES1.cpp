#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin>>T;

    while(T--)
    {
        int n, sum=0, k=0;
        cin>>n;
        int pile[n];
        for (int i=0; i<n; i++)
        {
            cin>>pile[i];
            sum+=pile[i];
            if (pile[i]==1)
            {
                k++;
            }
        }
        
        if (k>=1 || sum%2)
            cout<<"CHEF"<<endl;
        else
            cout<<"CHEFINA"<<endl;
    }

    return 0;
}