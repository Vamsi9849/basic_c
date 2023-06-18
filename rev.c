#include<stdio.h>
int main()
{
    int a;
    int rem,s=0;
    scanf("%d",&a);
    while(a!=0)
    {
        rem=a%10;
        s=s*10+rem;
        a/=10;

    }
    printf("%d",s);
}