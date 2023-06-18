#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    int s=0,rm,n;
    n=a;
    while(n!=0)
    {
        rm=n%10;
        s=s*10+rm;
        n/=10;
    }
    if(s==a)
    printf("Palindrom");
    else
    printf("not a palindrom");
}