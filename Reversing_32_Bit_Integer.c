#include <stdio.h>
int main()
{
unsigned int n,i=0;
int a[50],j;
scanf("%u",&n);
//printf("%u",n);
while(n!=0)
{
    a[i]=n%10;
    //printf("%d\n",a[i]);
    n=n/10;
    i++;
}
for(j=0;j<i;j++)
{
    printf("%d",a[j]);
}

    return 0;
}
