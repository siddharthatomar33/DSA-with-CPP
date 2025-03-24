#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t,n;
	cin>>t;
	while(t)
	{   long long int fact=1;
	    cin>>n;
	    for(int i=1;i<=n;i++)
	    {
	        fact=fact*i;
	    }
	    cout<<fact;
	    cout<<"\n";
	    t--;
	}
	return 0;
}