#include <stdio.h>

int main()
{
    // printf("Hello World");
    int n,p,rem,w=1;
    scanf("%d",&n);
    int a[8]={0},i=0,j,k=0,pv=10000000;
    while(n!=0)
    {
        a[i]=n%2;
        n=n/2;
        i++;
    }
    // for(j=7;j>=0;j--)
    // {
    //     printf("%d",a[j]);
    // }
    for(j=3;j>=0;j--)
    {
        // printf("\n%d %d",a[j],pv);
        k+=a[j]*pv;
        pv=pv/10;
        
    }
    for(j=7;j>=4;j--)
    {
        // printf("\n%d %d",a[j],pv);
        k+=a[j]*pv;
        pv=pv/10;
    }
// printf("\n%d",k);
while(k!=0)
{
 rem=k%10;
 p+=rem*w;
 w=w*2;
 k=k/10;
}
printf("%d",p);
    return 0;
}
