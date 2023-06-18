#include<stdio.h>
#include<math.h>
int main()
{
    int a, rm,n,s=0;
    scanf("%d",&a);
    n=a;
    while(n!=0)
    {
        rm=n%10;
        s=s+pow(rm,3);
        n/=10;
    }
    if(s==a)
    printf("Amgstorng number");
    else
    printf("not an amgst");
}