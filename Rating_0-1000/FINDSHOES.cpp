#include <bits/stdc++.h>
using namespace std;

int main()
{ 
    int T; 
    cin>>T; 
    
    while (T--)
    { 
        int x,y,a; 
        cin>>x>>y; 
        a=x-y; 
        
        if(y>=x) 
            cout<<x<<endl; 
        else 
            cout<<x+a<<endl; 
    }
    
	return 0;
}