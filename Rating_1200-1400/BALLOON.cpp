#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define endl "\n"
#define pb push_back
#define fi first
#define se second
#define lb lower_bound
#define ub upper_bound

int main()
{ 

   
    int T;
    cin>>T;
    
    while(T--)
    {
        int n;cin>>n;
        std::vector<int> v(n);
        int count=0;
        for (int i = 0; i < n; ++i)
        {
            cin>>v[i];
        }
        for (int i = 0; i < n; ++i)
        {
            if(v[i]<=7)
                count++;
            if(count==7)
            {
                cout<<i+1<<endl;
                break;
            }
        }
    }
}