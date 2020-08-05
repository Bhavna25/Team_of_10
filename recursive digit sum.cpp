#include <iostream>
using namespace std;
int sumofdigits(int n);
int main() {
	int n;
	cin>>n;
	cout<<sumofdigits(n);
}
int sumofdigits(int n){
	int sum=0;
    if(n/2==1)
    {
    	return n;
	}
	while(n)
	{
	  sum+=(n%10);
	  n=n/10;
    }
	return sumofdigits(sum); 
}
