#include <iostream>
#include <map>
#include<bits/stdc++.h>
using namespace std;

int main()
{
  int a[]={-2,-3,4,-1,-2,1,5,-3,5,-4};
  int max_ending_here=0,max_so_far=INT_MIN;

  for(int i=0;i<sizeof(a)/sizeof(int);i++)
  {
    max_ending_here=max(max_ending_here + a[i] , a[i]);
    //cout<<max_ending_here<<", ";
    max_so_far=max(max_so_far , max_ending_here);
  }

  cout<<"\nMax Sum: "<<max_so_far;
  return 0;
}
