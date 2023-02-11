#include <iostream>
using namespace std;

int main() {
	// your code goes here
	
	int T;
	cin>>T;
	
	while (T--)
	{
	    int age, X, Y;
	    cin>>X>>Y>>age;
	    
	    if (age>=X && age<Y)
	    {
	        cout<<"YES"<<endl;
	    }
	    else
	    {
	        cout<<"NO"<<endl;
	    }
	}
	
	return 0;
}