#include <iostream>
using namespace std;

int main()
{
	int T;
	cin>>T;

	while(T--)
	{
	    long maxT, maxN, sumN, output=0;
	    cin>>maxT;
	    long arr[maxT];
	    cin>>maxN>>sumN;

	    for(long i=0; i<maxT; i++)
	    {
	        if(sumN==0)
	        {
	            arr[i]=0;
	        }
	        else if(sumN-maxN>=0)
	        {
	            arr[i]=maxN;
	            sumN=sumN-maxN;
	        }
	        else
	        {
	            arr[i]=sumN;
	            sumN=0;
	        }
	    }
	    
	    for (int i=0;i<maxT;i++)
	    {
	        if(arr[i]!=0)
	        {
	            output=output+(arr[i]*arr[i]);
	        }
	        else
	        {
	            break;
	        }
	    }
	    
	    cout<<output<<endl;
	}
	
	return 0;
}