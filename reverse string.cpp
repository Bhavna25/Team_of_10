#include <iostream>
using namespace std;
void reverse(string &str,int);
void swap(char *a,char *b);
int main() {
	string str;
	cin>>str;
	cout<<str<<endl;
	reverse(str,0);
	cout<<str;
}
void reverse(string &str,int i){
	int n=str.length();
    if(i==n/2)
        return;
    swap(&str[i],&str[n-1-i]);
    reverse(str,i+1);
}
void swap(char *a,char *b)
{
	char temp=*a;
	*a=*b;
	*b=temp;
}
