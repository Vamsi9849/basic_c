#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    int i=0,flag=0;
    for(i=2;i<=a/2;i++)
    {
        if(a%i==0)
        {
            flag=1;
            break;
        }
    }
    if(flag==0)
    printf("prime number");
    else
    printf("not a prime number");
}