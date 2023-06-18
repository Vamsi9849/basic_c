#include<stdio.h>
int main()
{
    double fact=1;
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        fact=fact*i;

    }
    printf("%lf",fact);
}