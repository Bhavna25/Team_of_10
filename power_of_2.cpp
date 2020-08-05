#include <iostream>
#include <map>
#include<bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cout<<"Enter your number: "; cin>>n;
  if((n & (n-1))==0)
    cout<<"\nPower of 2";
  else
    cout<<"\nNot a power of 2";

return 0;
}
