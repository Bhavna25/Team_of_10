#include <iostream>
using namespace std;
int product(int a,int b);
int main() {
	int a,b;
	cin>>a>>b;
	cout<<product(a,b);
}
int product(int a,int b){
    if(b==0)
       return 0;
    
    return a+product(a,b-1);
}
