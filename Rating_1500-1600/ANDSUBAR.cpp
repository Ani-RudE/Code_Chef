#include <bits/stdc++.h>
using namespace std;
 
#define fo(i, n) for (int i = 0; i < n; i++)
 
#define d double
#define ld long double
#define ll long long int
 
#define vi vector<int>
#define pb push_back
#define eb emplace_back
#define pi pair<int, int>
#define pl pair<ll, ll>
#define pd pair<ld, ld>
#define fastio() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
 
#define ee cout << "\n"
 
 
bool powerTwo(ll n)
{
    if (n == 0)
        return 0;
    while (n != 1)
    {
        if (n%2 != 0)
            return 0;
        n = n/2;
    }
    return 1;
}
 
 
ll binpow(ll a, ll b)
{
    if (b == 0)
        return 1;
    ll res = binpow(a, b / 2);
    if (b % 2)
        return res * res * a;
    else
        return res * res;
}
 
 
bool isPrime(ll n)
{
    if (n <= 1)
        return false;
        
    for (ll i = 2; i < n; i++)
        if (n % i == 0)
            return false;
 
    return true;
}
 
 
ll fact(ll n)
{
    if ((n==0)||(n==1))
        return 1;
    else
        return n*fact(n-1);
}
 
 int powe(int n)
 {
    int p =1;
    while(p * 2 <= n)
        p*=2;
     
    return p;
 }

void solve()
{
    int n;
    cin>>n;
    
    int lp = powe(n);
    int bi = lp/2;
    int a1 = n - lp + 1;
    int a2 = lp - bi;
    
    cout<<max(a1,a2);
    
    ee;
}
 
 
 
int main() 
{
    fastio()
      
    int T;
    cin>>T;

    while(T--)
    {
        solve();
    }
   
    return 0;
}