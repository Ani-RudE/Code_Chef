#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin>>T;

    while(T--)
    {
        long a, b, n;
        cin>>a>>b>>n;
        
        if (b>a)
        {
            long temp=a;
            a=b;
            b=temp;
        }
        
        long diff=abs(b-a);
        long turns=0;
        
        for (int i=n; i>0; i--)
        {
            if (diff==0)
            {
                break;
            }
            
            turns+=diff/n;
            diff=diff-(n*turns);
            if (diff==0)
            {
                break;
            }
        }
        
        cout<<turns<<endl;
    }

    return 0;
}