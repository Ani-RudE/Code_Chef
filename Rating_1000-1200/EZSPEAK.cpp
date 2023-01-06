#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin>>T;
    
    while (T--)
    {
        int n, k=0;
        cin>>n;
        string S;
        cin>>S;
        
        for (int i=0; i<n; i++)
        {
            if (S[i]=='a' || S[i]=='e' || S[i]=='i' || S[i]=='o' || S[i]=='u')
            {
                k=0;
            }
            else
            {
                k++;
                if (k>= 4)
                {
                    break;
                }
            }
        }
        if (k>=4)
            cout<<"NO"<<endl;
        else
            cout<<"YES"<<endl;
    }
    
    return 0;
}