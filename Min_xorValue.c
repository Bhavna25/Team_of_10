#include <stdio.h>
int main()
{
int n,i,obxor,minxor=1000,p,q,j;
scanf("%d",&n);
int a[n];
for(i=0;i<n;i++)
{
    scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
    for(j=i+1;j<n;j++)
    {
        obxor=a[i]^a[j];
        if(minxor>obxor)
        {
            minxor=obxor;
            p=a[i];
            q=a[j];
        }
    }
}
printf("minimum xor is %d\n",minxor);
printf("pair which producing is %d& %d",p,q);
    return 0;
}
