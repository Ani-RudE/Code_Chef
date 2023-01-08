#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin>>T;

    while(T--)
    {
        long A, B, C;
        cin>>A>>B>>C;
        
        if (A+B+C>=100 && A>=10 && B>=10 && C>=10)
            cout<<"PASS"<<endl;
        else
            cout<<"FAIL"<<endl;
    }

    return 0;
}