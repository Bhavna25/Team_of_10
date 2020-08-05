#include <iostream>
using namespace std;

int main() {
	//code
	int t;
	cin>>t;
	while(t--)
	{
	    int a;
	    cin>>a;
	    unsigned int x= a & 0xAAAAAAAA;
	    unsigned int y= a & 0x55555555;
	    
	    x=x>>1;
	    y=y<<1;
	    cout<<(x|y)<<"\n";
	}
	return 0;
}
