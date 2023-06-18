#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int i,j,arr[10];
    i=0;
    while(n>0)
    {
        arr[i]=n%2;
        n/=2;
        i++;
    }
    for(j=i-1;j>=0;j--)
    {
        printf("%d",arr[j]);
    }

}