#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main()
{
    int T;
    cin>>T;
    
    while(T--)
    {
        string A, B, C, c;
        ll N, hash[26] {};
        cin >> A >> B >> N;

        A.append(B);
        while(N--) {
            cin >> c;
            C.append(c);
        }

        for(auto &x: A) {
            hash[x-97]++;
        }
        bool flag {0};
        for(auto &x: C) {
            hash[x-97]--;
            if(hash[x-97]<0) {flag=1; break;}
        }

        cout << ((flag)?"NO":"YES") << endl;
    }

    return 0;
}