#include <stdio.h>
void printvalue(int a[],int n)
{
    int i;
    for(i=0;i<=n;i++)
    {
        printf("%d",a[i]);
    }
    printf("\n");
}
void swap(int *a,int *b)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}
void permut(int a[],int n,int index)
{
    int i;
    if(index==n)
    printvalue(a,n);
    for(i=index;i<=n;i++)
    {
     swap(&a[index],&a[i]);
     permut(a,n,index+1);
     swap(&a[index],&a[i]);     
    }
}
int main()
{
    int n,i;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    permut(a,n-1,0);
    return 0;
}
