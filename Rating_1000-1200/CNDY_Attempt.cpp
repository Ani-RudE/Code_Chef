#include <bits/stdc++.h>
using namespace std;

static int distinct(int array[], int n)
{
    int x=1;
        
    for (int i=1; i<n; i++)
    {
        int j=0;
        for (j=0; j<i; j++)
        {
            if (array[i]==array[j])
                break;
        }
        
        if (i==j)
            x++;
    }
        
    int arr[x];
    for (int i=0; i<n-1; i++)
    {
        for (int k=1; k<n; k++)
        {
            if (arr[i]!=arr[k])
            {
                
            }
        }
    }
}

int main()
{
    int T;
    cin>>T;

    while(T--)
    {
        int N;
        cin>>N;
        int a[2*N];
        
        for (int i=0; i<2*N; i++)
        {
            cin>>a[i];
        }
        
        int arr[distinct(a, 2*N)];
    }

    return 0;
}