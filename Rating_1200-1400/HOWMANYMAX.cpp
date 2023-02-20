#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin>>T;

    while(T--)
    {
        int n;
        cin>>n;
        int arr[n];
        char s[n-1];
        
        for(int i=0;i<n-1;i++)
        {
            cin>>s[i];
        }
        
        int count=0;
        
        for(int i=0;i<n-1;i++)
        {
            if (s[i]=='1'&& s[i+1]!='1')
            {
                count++;
            }
        }
        
        if(s[n-2]=='0')
            count++;

        cout<<count<<endl;
    }

    return 0;
}