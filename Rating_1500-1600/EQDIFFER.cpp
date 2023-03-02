#include <bits/stdc++.h>
using namespace std;

int main()
{
	int T;
	cin>>T;
	
	while(T--)
	{
        int n;
        cin >> n;
        
        long long a[n];
        
        for(int i = 0; i < n; i++) {
            cin >> a[i];
        }
        
        if(n <= 2)
        {
            cout << 0 << endl;
        }
        else
        {
            sort(a, a + n);
            
            int same = 1, max = 0;
            for(int i = 1; i < n; i++)
            {
                if(a[i-1] == a[i])
                {
                    same++;
                }
                else
                {
                    max = same > max ? same : max;
                    same = 1;
                }
            }
            
            max = same > max ? same : max;
            
            if(max > 2)
            {
                cout << n - max << endl;
            }
            else
            {
                cout << n - 2 << endl;
            }
	    }
	}
	
	return 0;
}