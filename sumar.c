#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    int a[n];
    int sum=0;
    int osum=0;
    int esum=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        sum=sum+a[i];
        if(a[i]%2)
        osum=osum+a[i];
        else
        esum=esum+a[i];
    }
    printf("%d %d %d",sum,osum,esum);

}